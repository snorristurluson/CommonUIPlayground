// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "UObject/Object.h"
#include "CommonUITextButtonBase.generated.h"

/**
 * A base class for a CommonUI button with text
 */
UCLASS(Blueprintable, ClassGroup = UI, meta = (Category = "Common UI", DisableNativeTick))
class COMMONUIPLAYGROUND_API UCommonUITextButtonBase : public UCommonButtonBase
{
	GENERATED_BODY()

protected:
	virtual void NativeOnCurrentTextStyleChanged() override;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UCommonTextBlock* TextLabel;
};
