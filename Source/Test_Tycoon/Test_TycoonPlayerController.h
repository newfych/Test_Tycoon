// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Test_TycoonPlayerController.generated.h"

UCLASS()
class ATest_TycoonPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ATest_TycoonPlayerController();

protected:
	/** True if the controlled character should navigate to the mouse cursor. */
	uint32 bMoveToMouseCursor : 1;

	// Begin PlayerController interface
	virtual void PlayerTick(float DeltaTime) override;
};


