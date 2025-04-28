// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class TheLastDrop : ModuleRules
{
	public TheLastDrop(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
    
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Niagara", "PhysicsCore", "Rive", "RiveShaders", "RiveStats", "RiveRenderer" });

		if (Target.bBuildEditor)
		{
			// Only add editor modules when building for the editor
			//PublicDependencyModuleNames.Add("RiveEditor");
		}

		PrivateDependencyModuleNames.AddRange(new string[] { });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
        
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");
	}
}

