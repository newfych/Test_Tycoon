// Copyright Epic Games, Inc. All Rights Reserved.

#include "Test_TycoonGameMode.h"
#include "Test_TycoonPlayerController.h"
#include "UObject/ConstructorHelpers.h"

ATest_TycoonGameMode::ATest_TycoonGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATest_TycoonPlayerController::StaticClass();

}