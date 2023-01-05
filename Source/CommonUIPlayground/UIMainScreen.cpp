// Fill out your copyright notice in the Description page of Project Settings.


#include "UIMainScreen.h"

#include "UITag.h"
#include "WindowManager.h"
#include "Input/CommonUIInputTypes.h"
#include "NativeGameplayTags.h"

UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_UI_ACTION_ESCAPE, "UI.Action.Escape");

void UUIMainScreen::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	RegisterUIActionBinding(FBindUIActionArgs(FUIActionTag::ConvertChecked(TAG_UI_ACTION_ESCAPE), false, FSimpleDelegate::CreateUObject(this, &ThisClass::HandleEscapeAction)));
}

void UUIMainScreen::HandleEscapeAction_Implementation()
{
}
