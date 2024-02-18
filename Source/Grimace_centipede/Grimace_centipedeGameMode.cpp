// Copyright Epic Games, Inc. All Rights Reserved.

#include "Grimace_centipedeGameMode.h"
#include "Grimace_centipedePlayerController.h"
#include "Grimace_centipedeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGrimace_centipedeGameMode::AGrimace_centipedeGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGrimace_centipedePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}