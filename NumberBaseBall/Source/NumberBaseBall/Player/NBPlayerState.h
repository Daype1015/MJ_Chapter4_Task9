// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "NBPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class NUMBERBASEBALL_API ANBPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	ANBPlayerState();

	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const override;

	FString GetPlayerInfoString();

public:
	FString PlayerNameString;

	UPROPERTY(Replicated)
	int32 PlayerNumber;

	UPROPERTY(Replicated)
	int32 CurrentGameCount;

	UPROPERTY(Replicated)
	int32 MaxGameCount;
};
