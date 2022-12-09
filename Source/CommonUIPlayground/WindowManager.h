// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "WindowManager.generated.h"

/**
 * The window manager provides methods to push and pop widgets to/from a base layer
 */
UCLASS()
class COMMONUIPLAYGROUND_API UWindowManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetBaseLayer(UCommonActivatableWidgetContainerBase* InBaseLayer);

	UFUNCTION(BlueprintCallable)
	UCommonActivatableWidget* PushModal(TSubclassOf<UCommonActivatableWidget> ActivatableWidgetClass);

	UFUNCTION(BlueprintCallable)
	void PopModal();

protected:
	UCommonActivatableWidgetContainerBase* BaseLayer = nullptr;
};
