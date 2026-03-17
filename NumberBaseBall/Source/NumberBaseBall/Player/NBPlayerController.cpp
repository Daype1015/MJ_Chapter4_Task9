// Fill out your copyright notice in the Description page of Project Settings.


#include "NBPlayerController.h"
#include "NumberBaseBall/UI/NBGameWidget.h"
#include "Blueprint/UserWidget.h"

ANBPlayerController::ANBPlayerController()
{
	
}

void ANBPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(PlayGameWidgetClass) == true)
	{
		PlayeGameWidgetInstance = CreateWidget<UNBGameWidget>(this, PlayGameWidgetClass);
		if (IsValid(PlayeGameWidgetInstance) == true)
		{
			PlayeGameWidgetInstance->AddToViewport();
		}
	}
}
