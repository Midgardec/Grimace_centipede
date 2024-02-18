// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Grimace_centipede : ModuleRules
{
	public Grimace_centipede(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput" });
    }
}
