// Fill out your copyright notice in the Description page of Project Settings.


#include "WindowManager.h"

void UWindowManager::SetBaseLayer(UCommonActivatableWidgetContainerBase* InBaseLayer)
{
	BaseLayer = InBaseLayer;
}

UCommonActivatableWidget* UWindowManager::PushModal(TSubclassOf<UCommonActivatableWidget> ActivatableWidgetClass)
{
	return BaseLayer->AddWidget(ActivatableWidgetClass);
}

void UWindowManager::PopModal()
{
	UCommonActivatableWidget* TopWidget = BaseLayer->GetActiveWidget();
	if (TopWidget)
	{
		BaseLayer->RemoveWidget(*TopWidget);
	}
}
