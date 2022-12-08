// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UIMainScreen.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "WindowManager.generated.h"

/**
 * 
 */
UCLASS()
class COMMONUIPLAYGROUND_API UWindowManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetBaseLayer(UCommonActivatableWidgetContainerBase* InBaseLayer);

	UFUNCTION(BlueprintCallable)
	void SetMainScreen(UUIMainScreen* InMainScreen);

	UFUNCTION(BlueprintCallable)
	UCommonActivatableWidget* PushModal(TSubclassOf<UCommonActivatableWidget> ActivatableWidgetClass);

	UFUNCTION(BlueprintCallable)
	void PopModal();

protected:
	UUIMainScreen* MainScreen = nullptr;
	UCommonActivatableWidgetContainerBase* BaseLayer = nullptr;
};
