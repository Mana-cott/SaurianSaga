// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SaurianSaga : ModuleRules
{
	public SaurianSaga(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"SaurianSaga",
			"SaurianSaga/Variant_Platforming",
			"SaurianSaga/Variant_Platforming/Animation",
			"SaurianSaga/Variant_Combat",
			"SaurianSaga/Variant_Combat/AI",
			"SaurianSaga/Variant_Combat/Animation",
			"SaurianSaga/Variant_Combat/Gameplay",
			"SaurianSaga/Variant_Combat/Interfaces",
			"SaurianSaga/Variant_Combat/UI",
			"SaurianSaga/Variant_SideScrolling",
			"SaurianSaga/Variant_SideScrolling/AI",
			"SaurianSaga/Variant_SideScrolling/Gameplay",
			"SaurianSaga/Variant_SideScrolling/Interfaces",
			"SaurianSaga/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
