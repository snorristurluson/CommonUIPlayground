// Fill out your copyright notice in the Description page of Project Settings.


#include "UIMainScreen.h"

#include "UITag.h"
#include "WindowManager.h"
#include "Input/CommonUIInputTypes.h"

static const FUIActionTag EscapeActionTag = FUIActionTag::AddNativeTag(TEXT("Escape"));

void UUIMainScreen::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	RegisterUIActionBinding(FBindUIActionArgs(EscapeActionTag, false, FSimpleDelegate::CreateUObject(this, &ThisClass::HandleEscapeAction)));
}

void UUIMainScreen::HandleEscapeAction_Implementation()
{
}
