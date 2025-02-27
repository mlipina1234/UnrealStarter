// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UnrealStarterGameMode.h"
#include "UnrealStarterHUD.h"
#include "UnrealStarterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealStarterGameMode::AUnrealStarterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnrealStarterHUD::StaticClass();
}
