// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjetoEBACCmaismais : ModuleRules
{
	public ProjetoEBACCmaismais(ReadOnlyTargetRules Target) : base(Target)
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
			"ProjetoEBACCmaismais",
			"ProjetoEBACCmaismais/Variant_Horror",
			"ProjetoEBACCmaismais/Variant_Horror/UI",
			"ProjetoEBACCmaismais/Variant_Shooter",
			"ProjetoEBACCmaismais/Variant_Shooter/AI",
			"ProjetoEBACCmaismais/Variant_Shooter/UI",
			"ProjetoEBACCmaismais/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
