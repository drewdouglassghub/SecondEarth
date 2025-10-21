#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapGenerator.h"
#include "MapPreviewer.generated.h"

UCLASS()
class GRIDSYSTEM_API AMapPreviewer : public AActor
{
    GENERATED_BODY()

public:
    AMapPreviewer();

protected:
    virtual void BeginPlay() override;

public:
    //UPROPERTY(EditAnywhere, Category = "Map")
    //int32 MapWidth = 10;

    //UPROPERTY(EditAnywhere, Category = "Map")
    //int32 MapHeight = 10;

    //UPROPERTY(EditAnywhere, Category = "Map")
    //int32 Seed = 42;

    //UPROPERTY(EditAnywhere, Category = "Map")
    //float TileSize = 100.f;

    //UPROPERTY()
    //UMapGenerator* Generator;

   /* void VisualizeMap();*/
};