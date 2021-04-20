// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Test_Tycoon : ModuleRules
{
	public Test_Tycoon(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule" });
    }
}
