#include "MapGenerator.h"

void UMapGenerator::GenerateMap_Implementation(int32 Width, int32 Height, int32 Seed)
{
    GeneratedTiles.Empty();
    FRandomStream RandStream(Seed);

    for (int32 X = 0; X < Width; ++X)
    {
        for (int32 Y = 0; Y < Height; ++Y)
        {
            FVector2D Coord(X, Y);
            float Elevation = FMath::PerlinNoise2D(Coord * 0.1f + FVector2D(Seed, Seed));
            EBiomeType Biome = DetermineBiome_Implementation(Elevation);

            UMapTile* Tile = NewObject<UMapTile>();
            Tile->GridCoord = Coord;
            Tile->Elevation = Elevation;
            Tile->Biome = Biome;
            Tile->bHasResource = RandStream.FRand() < 0.2f;

            GeneratedTiles.Add(Tile);
        }
    }
}

EBiomeType UMapGenerator::DetermineBiome(float Elevation)
{
    return DetermineBiome_Implementation(Elevation);
}

EBiomeType UMapGenerator::DetermineBiome_Implementation(float Elevation)
{
    if (Elevation < 0.2f) return EBiomeType::Water;
    if (Elevation < 0.4f) return EBiomeType::Grassland;
    if (Elevation < 0.6f) return EBiomeType::Forest;
    if (Elevation < 0.8f) return EBiomeType::Desert;
    return EBiomeType::Mountain;
}