// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "CommonInputTypeEnum.h"
#include "MyActivatableWidget.generated.h"

UENUM(BlueprintType)
enum class EMyInputMode : uint8
{
	Menu	UMETA(Tooltip = "Input is received by the UI only"),
	Game	UMETA(Tooltip = "Input is received by the Game only"),
	All		UMETA(Tooltip = "Input is received by UI and the Game"),

	MAX UMETA(Hidden)
};

/**
 * 
 */
UCLASS()
class COMMONUIPLAYGROUND_API UMyActivatableWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()

public:
	virtual TOptional<FUIInputConfig> GetDesiredInputConfig() const override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMyInputMode InputMode = EMyInputMode::All;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMouseCaptureMode CaptureMode = EMouseCaptureMode::NoCapture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HideCursor = false;
};
