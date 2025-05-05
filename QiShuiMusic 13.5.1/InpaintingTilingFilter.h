@interface InpaintingTilingFilter : NSObject
+ (BOOL)initializeBoundaryPreservingTile;
+ (BOOL)isMaskRelativeAreaTooLargeForTiling:maskBoundingBox:expandedMaskBoundingBox:andMaxRelativeAreaSize:;
+ (BOOL)isMaskSmallOrElongated:maskBoundingBox:expandedMaskBoundingBox:maxElogatedMaskEdgeSize:;
+ (double)computeDistanceMultiplierForMask:andTileSize:;
+ (id)computeTileCentersForNarrowDiagonalMask:tileSize:maxBaseDistanceBetweenPoints:maxRelativeMaskAreaSize:;
+ (void)computeTileSize:andMaxDistanceBetweenTiles:forExpandedMaskBBox:;
+ (BOOL)isMaskNarrowDiagonal:maskBoundingBox:expandedMaskBoundingBox:maxDiagonalMaskEdgeSize:maxRelativeMaskAreaSize:;
+ (id)performInpaintingTilingPipelineOnImage:usingMask:boundingBox:additionalParameters:espressoResources:executionContext:;
@end
