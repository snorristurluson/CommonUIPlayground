// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyActivatableWidget.h"
#include "UIMainScreen.generated.h"

/**
 * The main screen handles the Escape action
 */
UCLASS()
class COMMONUIPLAYGROUND_API UUIMainScreen : public UMyActivatableWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent)
	void HandleEscapeAction();

protected:
	virtual void NativeOnInitialized() override;
};
