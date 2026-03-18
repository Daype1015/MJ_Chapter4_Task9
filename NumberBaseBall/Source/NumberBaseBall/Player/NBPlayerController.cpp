// Fill out your copyright notice in the Description page of Project Settings.


#include "NBPlayerController.h"
#include "NBPlayerState.h"
#include "NumberBaseBall/GameMode/NBGameModeBase.h"
#include "NumberBaseBall/UI/NBGameWidget.h"
#include "NumberBaseBall/NumberBaseBall.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "Net/UnrealNetwork.h"

ANBPlayerController::ANBPlayerController()
{
	bReplicates = true;
}

void ANBPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (IsLocalController() == false)
	{
		return;
	}

	FInputModeUIOnly InputModeUIOnly;
	SetInputMode(InputModeUIOnly);

	if (IsValid(PlayGameWidgetClass) == true)
	{
		PlayeGameWidgetInstance = CreateWidget<UNBGameWidget>(this, PlayGameWidgetClass);
		if (IsValid(PlayeGameWidgetInstance) == true)
		{
			PlayeGameWidgetInstance->AddToViewport();
		}
	}

	if (IsValid(NotificationTextWidgetClass) == true)
	{
		NotificationTextWidgetInstance = CreateWidget<UUserWidget>(this, NotificationTextWidgetClass);
		if (IsValid(NotificationTextWidgetInstance) == true)
		{
			NotificationTextWidgetInstance->AddToViewport();
		}
	}
}

void ANBPlayerController::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, NotificationText)
}

void ANBPlayerController::SetChatMessageString(const FString& InputChatMessage)
{
	if (IsLocalController() == true)
	{
		ANBPlayerState* NBPS = GetPlayerState<ANBPlayerState>();
		if (IsValid(NBPS) == true)
		{
			FString PlayerNumber = TEXT("Player ") + FString::FromInt(NBPS->PlayerNumber) + TEXT(" : ");
			FString CombinedString = PlayerNumber + InputChatMessage;

			ServerRPCPrintChatMessageString(CombinedString);

		}
	}
}

void ANBPlayerController::PrintChatMessage(const FString& InputChatMessage)
{
	NumberBaseBallFunctionLibrary::MyPrintString(this, InputChatMessage, 10.f);
}

void ANBPlayerController::ClientRPCPrintChatMessageString_Implementation(const FString& InputChatMessage)
{
	ANBPlayerState* NBPS = GetPlayerState<ANBPlayerState>();
	if (IsValid(NBPS) == true)
	{
		FString PlayerInfo = NBPS->GetPlayerInfoString();
		FString CombinedString = InputChatMessage + TEXT(" : ") + PlayerInfo;
		PrintChatMessage(CombinedString);
	}
}

void ANBPlayerController::ServerRPCPrintChatMessageString_Implementation(const FString& InputChatMessage)
{
	AGameModeBase* GM = UGameplayStatics::GetGameMode(this);
	if (IsValid(GM) == true)
	{
		ANBGameModeBase* NBGM = Cast<ANBGameModeBase>(GM);
		if (IsValid(NBGM) == true)
		{
			NBGM->PrintMessageString(this, InputChatMessage);
		}
	}
}


