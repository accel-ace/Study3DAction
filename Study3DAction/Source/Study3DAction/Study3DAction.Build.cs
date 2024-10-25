// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Study3DAction : ModuleRules
{
	public Study3DAction(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
