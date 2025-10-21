#include "MapPreviewer.h"
#include "DrawDebugHelpers.h"

AMapPreviewer::AMapPreviewer()
{
    PrimaryActorTick.bCanEverTick = false;
}

void AMapPreviewer::BeginPlay()
{
    Super::BeginPlay();

    //Generator = NewObject<UMapGenerator>();
    //Generator->GenerateMap(MapWidth, MapHeight, Seed);

    //VisualizeMap();
}

//void AMapPreviewer::VisualizeMap()
//{
//    if (!Generator) return;
//
//    for (UMapTile* Tile : Generator->GeneratedTiles)
//    {
//        FVector WorldPos = Tile->GetWorldPosition(TileSize);
//        FVector Origin = GetActorLocation() + WorldPos;
//
//        FColor Color;
//        switch (Tile->Biome)
//        {
//        case EBiomeType::Grassland: Color = FColor::Green; break;
//        case EBiomeType::Desert: Color = FColor::Yellow; break;
//        case EBiomeType::Forest: Color = FColor::Emerald; break;
//        case EBiomeType::Mountain: Color = FColor::Silver; break;
//        case EBiomeType::Water: Color = FColor::Blue; break;
//        default: Color = FColor::White; break;
//        }
//
//        DrawDebugBox(GetWorld(), Origin, FVector(TileSize * 0.5f), Color, true, -1.f, 0, 2.f);
//        DrawDebugString(GetWorld(), Origin + FVector(0, 0, 50), FString::Printf(TEXT("E: %.2f"), Tile->Elevation), nullptr, FColor::White, 0.f, true);
;

 }