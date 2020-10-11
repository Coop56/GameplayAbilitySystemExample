// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GASExample : ModuleRules
{
	public GASExample(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "GameplayAbilities", "GameplayTags", "GameplayTasks" });
	}
}
