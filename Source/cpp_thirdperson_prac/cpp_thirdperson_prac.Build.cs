// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class cpp_thirdperson_prac : ModuleRules
{
	public cpp_thirdperson_prac(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
