@interface GEOMapEdgeTransitFinder : GEOMapEdgeFinder
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithMap:center:radius:;
- (void)_buildersInTile:localPoint:localRadiusSqr:localSearch:handler:;
- (BOOL)_checkEdgeForDuplicates:;
@end
