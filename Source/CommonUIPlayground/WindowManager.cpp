// Fill out your copyright notice in the Description page of Project Settings.


#include "WindowManager.h"

void UWindowManager::SetBaseLayer(UCommonActivatableWidgetContainerBase* InBaseLayer)
{
	BaseLayer = InBaseLayer;
}

void UWindowManager::SetMainScreen(UUIMainScreen* InMainScreen)
{
	MainScreen = InMainScreen;
}

UCommonActivatableWidget* UWindowManager::PushModal(TSubclassOf<UCommonActivatableWidget> ActivatableWidgetClass)
{
	MainScreen->SetStackEmpty(false);
	return BaseLayer->AddWidget(ActivatableWidgetClass);
}

void UWindowManager::PopModal()
{
	UCommonActivatableWidget* TopWidget = BaseLayer->GetActiveWidget();
	if (TopWidget)
	{
		if (BaseLayer->GetNumWidgets() == 1)
		{
			// Widget does not disappear immediately from the base layer, but if this was the last
			// we notify the main screen
			MainScreen->SetStackEmpty(true);
		}
		BaseLayer->RemoveWidget(*TopWidget);
	}
}
