// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "MyActivatableWidget.h"
#include "UIMainScreen.generated.h"

/**
 * 
 */
UCLASS()
class COMMONUIPLAYGROUND_API UUIMainScreen : public UMyActivatableWidget
{
	GENERATED_BODY()

public:
	void SetStackEmpty(bool bValue);

	UFUNCTION(BlueprintNativeEvent)
	void HandleEscapeAction();

	UFUNCTION(BlueprintNativeEvent)
	void HandleMapAction();

protected:
	virtual void NativeOnInitialized() override;
	bool IsStackEmpty = true;
};
