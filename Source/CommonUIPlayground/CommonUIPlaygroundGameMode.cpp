// Copyright Epic Games, Inc. All Rights Reserved.

#include "CommonUIPlaygroundGameMode.h"
#include "CommonUIPlaygroundCharacter.h"
#include "MyHud.h"
#include "UObject/ConstructorHelpers.h"

ACommonUIPlaygroundGameMode::ACommonUIPlaygroundGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
