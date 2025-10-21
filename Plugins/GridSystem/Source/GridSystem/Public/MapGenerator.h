#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MapTile.h"
#include "MapGenerator.generated.h"

UCLASS(BlueprintType, Blueprintable)
class GRIDSYSTEM_API UMapGenerator : public UObject
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Map")
    void GenerateMap(int32 Width, int32 Height, int32 Seed);
    virtual void GenerateMap_Implementation(int32 Width, int32 Height, int32 Seed);

    UPROPERTY(BlueprintReadWrite, Category = "Map")
    TArray<UMapTile*> GeneratedTiles;

    UFUNCTION(BlueprintCallable, Category = "Map")
    EBiomeType DetermineBiome(float Elevation);
    virtual EBiomeType DetermineBiome_Implementation(float Elevation);
};