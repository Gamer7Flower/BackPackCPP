// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BackPack_Cpp : ModuleRules
{
	public BackPack_Cpp(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput","UMG", });
		PrivateDependencyModuleNames.AddRange(new string[] {
			"Slate",
			"SlateCore"  
		});
	}
}
