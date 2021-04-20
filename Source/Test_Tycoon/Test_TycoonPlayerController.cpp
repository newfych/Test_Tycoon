// Copyright Epic Games, Inc. All Rights Reserved.

#include "Test_TycoonPlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Engine/World.h"

ATest_TycoonPlayerController::ATest_TycoonPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void ATest_TycoonPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
}



