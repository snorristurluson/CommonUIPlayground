// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActivatableWidget.h"

TOptional<FUIInputConfig> UMyActivatableWidget::GetDesiredInputConfig() const
{
	return FUIInputConfig(ECommonInputMode(InputMode), CaptureMode, HideCursor);
}
