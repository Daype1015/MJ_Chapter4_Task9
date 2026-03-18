// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "NBPlayerController.generated.h"

class UNBGameWidget;
class UUserWidget;

/**
 * 
 */
UCLASS()
class NUMBERBASEBALL_API ANBPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ANBPlayerController();

	virtual void BeginPlay() override;

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	void SetChatMessageString(const FString& InputChatMessage);

	void PrintChatMessage(const FString& InputChatMessage);

	UFUNCTION(Client, Reliable)
	void ClientRPCPrintChatMessageString(const FString& InputChatMessage); //서버에서 호출 클라에서 실행

	UFUNCTION(Server, Reliable)
	void ServerRPCPrintChatMessageString(const FString& InputChatMessage); //클라에서 호출 서버에서 실행



protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UNBGameWidget> PlayGameWidgetClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UNBGameWidget> PlayeGameWidgetInstance;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> NotificationTextWidgetClass;

	UPROPERTY()
	TObjectPtr<UUserWidget> NotificationTextWidgetInstance;

	FString ChatMessage;

public:
	UPROPERTY(Replicated, BlueprintReadOnly)
	FText NotificationText;

};
