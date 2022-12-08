// Fill out your copyright notice in the Description page of Project Settings.


#include "UIMainScreen.h"

#include "CommonUISubsystemBase.h"
#include "UITag.h"
#include "WindowManager.h"
#include "Input/CommonUIInputTypes.h"

static const FUIActionTag EscapeActionTag = FUIActionTag::AddNativeTag(TEXT("Escape"));
static const FUIActionTag MapActionTag = FUIActionTag::AddNativeTag(TEXT("Map"));

void UUIMainScreen::HandleMapAction_Implementation()
{
}

void UUIMainScreen::SetStackEmpty(bool bValue)
{
	IsStackEmpty = bValue;
}

void UUIMainScreen::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	RegisterUIActionBinding(FBindUIActionArgs(EscapeActionTag, false, FSimpleDelegate::CreateUObject(this, &ThisClass::HandleEscapeAction)));
	RegisterUIActionBinding(FBindUIActionArgs(MapActionTag, false, FSimpleDelegate::CreateUObject(this, &ThisClass::HandleMapAction)));
}

void UUIMainScreen::HandleEscapeAction_Implementation()
{
}
