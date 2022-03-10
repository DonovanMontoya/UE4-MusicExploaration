// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MusicExplorationHUD.generated.h"

UCLASS()
class AMusicExplorationHUD : public AHUD
{
	GENERATED_BODY()

public:
	AMusicExplorationHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

