// Copyright Epic Games, Inc. All Rights Reserved.

#include "BackPack_CppGameMode.h"
#include "BackPack_CppCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABackPack_CppGameMode::ABackPack_CppGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
