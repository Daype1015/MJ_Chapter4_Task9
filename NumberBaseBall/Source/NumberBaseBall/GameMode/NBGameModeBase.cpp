// Fill out your copyright notice in the Description page of Project Settings.


#include "NBGameModeBase.h"
#include "NumberBaseBall/Player/NBPlayerController.h"
#include "NumberBaseBall/Player/NBPlayerState.h"
#include "EngineUtils.h"

void ANBGameModeBase::OnPostLogin(AController* NewPlayer)
{
	Super::OnPostLogin(NewPlayer);

	if (IsValid(NewPlayer) == true)
	{
		ANBPlayerController* NBPlayerController = Cast<ANBPlayerController>(NewPlayer);
		if (IsValid(NBPlayerController) == true)
		{
			AllPlayerControllers.Add(NBPlayerController);
			NBPlayerController->NotificationText = FText::FromString(TEXT("Connected to game."));

			ANBPlayerState* NBPS = Cast<ANBPlayerState>(NewPlayer->PlayerState);
			if (IsValid(NBPS) == true)
			{
				NBPS->PlayerNumber = ConnectedPlayerNumber;
				ConnectedPlayerNumber++;
			}
		}
	}
}

FString ANBGameModeBase::GenerateSecretNumber()
{
	TArray<int32> Numbers;
	for (int32 i = 0; i <= 9; ++i)
	{
		Numbers.Add(i);
	}

	FMath::RandInit(FDateTime::Now().GetTicks());
	Numbers = Numbers.FilterByPredicate([](int32 Num) {return Num > 0; });

	FString Result;
	for (int32 i = 0; i < 3; ++i)
	{
		int32 Index = FMath::RandRange(0, Numbers.Num() - 1);
		Result.Append(FString::FromInt(Numbers[Index]));
		Numbers.RemoveAt(Index);
	}

	return Result;
}

bool ANBGameModeBase::IsGuessNumberString(const FString& InNumberString)
{
	bool bCanPlay = false;

	do {

		if (InNumberString.Len() != 3)
		{
			break;
		}

		bool bIsUnique = true;
		TSet<TCHAR> UniqueDigits;
		for (TCHAR C : InNumberString)
		{
			if (FChar::IsDigit(C) == false || C == '0')
			{
				bIsUnique = false;
				break;
			}

			UniqueDigits.Add(C);
		}

		if (bIsUnique == false)
		{
			break;
		}

		bCanPlay = true;

	} while (false);

	return bCanPlay;
}

FString ANBGameModeBase::JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString)
{
	int32 StrikeCount = 0;
	int32 BallCount = 0;

	for (int32 i = 0; i < 3; ++i)
	{
		if (InSecretNumberString[i] == InGuessNumberString[i])
		{
			StrikeCount++;
		}
		else
		{
			FString PlayerGuessChar = FString::Printf(TEXT("%c"), InGuessNumberString[i]);
			if (InSecretNumberString.Contains(PlayerGuessChar))
			{
				BallCount++;
			}
		}
	}

	if (StrikeCount == 0 && BallCount == 0)
	{
		return TEXT("OUT");
	}

	return FString::Printf(TEXT("%dS%dB"), StrikeCount, BallCount);
}

void ANBGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	RandomSecretNumber = GenerateSecretNumber();
}

void ANBGameModeBase::PrintMessageString(ANBPlayerController* InChattingPlayerController, const FString& InputChatMessage)
{
	ANBPlayerState* InChattingPlayerState = InChattingPlayerController->GetPlayerState<ANBPlayerState>();
	if (IsValid(InChattingPlayerState) == false)
	{
		return;
	}

	int Index = InputChatMessage.Len() - 3;
	FString GuessNumberString = InputChatMessage.RightChop(Index);
	if (IsGuessNumberString(GuessNumberString) == true && (InChattingPlayerState->CurrentGameCount < InChattingPlayerState->MaxGameCount))
	{
		FString JudgeResultString = JudgeResult(RandomSecretNumber, GuessNumberString);

		IncreaseGuessCount(InChattingPlayerController);

		for (TActorIterator<ANBPlayerController> It(GetWorld()); It; ++It)
		{
			ANBPlayerController* NBPlayerController = *It;
			if (IsValid(NBPlayerController) == true)
			{
				FString CombinedString = InputChatMessage + TEXT(" -> ") + JudgeResultString;
				NBPlayerController->ClientRPCPrintChatMessageString(CombinedString);

				int32 StrikeCount = FCString::Atoi(*JudgeResultString.Left(1));
				JudgeGame(InChattingPlayerController, StrikeCount);
			}
		}
	}
	else if (IsGuessNumberString(GuessNumberString) == true && (InChattingPlayerState->CurrentGameCount == InChattingPlayerState->MaxGameCount))
	{
		for (TActorIterator<ANBPlayerController> It(GetWorld()); It; ++It)
		{
			ANBPlayerController* NBPlayerController = *It;
			if (IsValid(NBPlayerController) == true)
			{
				FString GameOver = FString::Printf(TEXT("Your Count Already Max : GameOver!!"));
				FString CombinedString = InputChatMessage + GameOver;
				NBPlayerController->ClientRPCPrintChatMessageString(CombinedString);
			}
		}
	}
	else
	{
		for (TActorIterator<ANBPlayerController> It(GetWorld()); It; ++It)
		{
			ANBPlayerController* NBPlayerController = *It;
			if (IsValid(NBPlayerController) == true)
			{
				
				NBPlayerController->ClientRPCPrintChatMessageString(InputChatMessage);
			}
		}
	}
}

void ANBGameModeBase::IncreaseGuessCount(ANBPlayerController* InChattingPlayerController)
{
	if (IsValid(InChattingPlayerController) == true)
	{
		ANBPlayerState* NBPS = InChattingPlayerController->GetPlayerState<ANBPlayerState>();
		if (IsValid(NBPS) == true)
		{
			NBPS->CurrentGameCount += 1;
		}
	}
}

void ANBGameModeBase::ResetGame()
{
	RandomSecretNumber = GenerateSecretNumber();

	for (const auto& NBPlayerController : AllPlayerControllers)
	{
		ANBPlayerState* NBPS = NBPlayerController->GetPlayerState<ANBPlayerState>();
		if (IsValid(NBPS) == true)
		{
			NBPS->CurrentGameCount = 0;
		}
	}
}

void ANBGameModeBase::JudgeGame(ANBPlayerController* InChattingPlayerController, int InStrikeCount)
{
	if (3 == InStrikeCount)
	{
		ANBPlayerState* NBPS = InChattingPlayerController->GetPlayerState<ANBPlayerState>();
		for (const auto& NBPlayerController : AllPlayerControllers)
		{
			if (IsValid(NBPS) == true)
			{
				FString CombinedString = NBPS->PlayerNumber + TEXT(" Player Win");
				NBPlayerController->NotificationText = FText::FromString(CombinedString);

				ResetGame();
			}
		}
	}
	else
	{
		bool bIsDraw = true;
		for (const auto& NBPlayerController : AllPlayerControllers)
		{
			ANBPlayerState* NBPS = NBPlayerController->GetPlayerState<ANBPlayerState>();
			if (IsValid(NBPS) == true)
			{
				if (NBPS->CurrentGameCount < NBPS->MaxGameCount)
				{
					bIsDraw = false;
					break;
				}
			}
		}

		if (bIsDraw == true)
		{
			for (const auto& NBPlayerController : AllPlayerControllers)
			{
				NBPlayerController->NotificationText = FText::FromString(TEXT("DRAW"));

				ResetGame();
			}
		}
	}

	
}
