// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonUITextButtonBase.h"

#include "CommonTextBlock.h"

void UCommonUITextButtonBase::NativeOnCurrentTextStyleChanged()
{
	Super::NativeOnCurrentTextStyleChanged();
	if (TextLabel)
	{
		TextLabel->SetStyle(GetCurrentTextStyleClass());
	}
}
