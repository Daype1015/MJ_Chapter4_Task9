// Fill out your copyright notice in the Description page of Project Settings.


#include "NBPlayerState.h"
#include "Net/UnrealNetwork.h"

ANBPlayerState::ANBPlayerState() :
	PlayerNumber(-1),
	CurrentGameCount(0),
	MaxGameCount(5)
{
	bReplicates = true;
}

void ANBPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, PlayerNumber);
	DOREPLIFETIME(ThisClass, CurrentGameCount);
	DOREPLIFETIME(ThisClass, MaxGameCount);
}

FString ANBPlayerState::GetPlayerInfoString()
{
	FString PlayerInfoString = FString::FromInt(CurrentGameCount) + TEXT("/") + FString::FromInt(MaxGameCount);

	return PlayerInfoString;
}
