// Copyright Epic Games, Inc. All Rights Reserved.

#include "MusicExplorationGameMode.h"
#include "MusicExplorationHUD.h"
#include "MusicExplorationCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMusicExplorationGameMode::AMusicExplorationGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMusicExplorationHUD::StaticClass();
}
