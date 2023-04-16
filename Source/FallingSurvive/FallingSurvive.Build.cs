// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FallingSurvive : ModuleRules
{
	public FallingSurvive(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
