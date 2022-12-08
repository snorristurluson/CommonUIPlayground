// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CommonUIPlayground : ModuleRules
{
	public CommonUIPlayground(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] {  });
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core", "CoreUObject", "Engine", "InputCore", 
			"HeadMountedDisplay", "EnhancedInput", "UMG", "GameplayTags", "CommonUI" });
	}
}
