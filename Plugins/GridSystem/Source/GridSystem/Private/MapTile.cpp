#include "MapTile.h"

FVector UMapTile::GetWorldPosition(float TileSize) const
{
    return FVector(GridCoord.X * TileSize, GridCoord.Y * TileSize, 0.f);
}