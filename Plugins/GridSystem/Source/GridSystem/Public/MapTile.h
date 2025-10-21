#pragma once

#include "CoreMinimal.h"
#include "GridSystem.h"
#include "MapTile.generated.h"

UENUM(BlueprintType)
enum class EBiomeType : uint8
{
    Grassland,
    Desert,
    Forest,
    Mountain,
    Water
};

UCLASS(Blueprintable)
class GRIDSYSTEM_API UMapTile : public UObject
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tile")
    FVector2D GridCoord;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tile")
    float Elevation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tile")
    EBiomeType Biome;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tile")
    bool bHasResource;

    UFUNCTION(BlueprintCallable, Category = "Tile")
    FVector GetWorldPosition(float TileSize) const;
};