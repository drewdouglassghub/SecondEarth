using UnrealBuildTool;

public class GridSystem : ModuleRules
{
    public GridSystem(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core", "CoreUObject", "Engine", "InputCore", "DeveloperSettings"
        });

        PrivateDependencyModuleNames.AddRange(new string[] { });

        if (Target.bBuildEditor)
        {
            PrivateDependencyModuleNames.AddRange(new string[] {
                "UnrealEd", "BlueprintGraph", "EditorSubsystem"
            });
        }
    }
}