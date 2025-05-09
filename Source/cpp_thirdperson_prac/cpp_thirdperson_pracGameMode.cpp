// Copyright Epic Games, Inc. All Rights Reserved.

#include "cpp_thirdperson_pracGameMode.h"
#include "cpp_thirdperson_pracCharacter.h"
#include "UObject/ConstructorHelpers.h"

Acpp_thirdperson_pracGameMode::Acpp_thirdperson_pracGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
