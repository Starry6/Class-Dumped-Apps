@interface GEOMapEdgeRoadBuilder : GEOMapEdgeBuilder
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_lastPoint;
- (unsigned long long)_maxTileCount;
- (void)_buildCompleteEdge;
- (BOOL)_findEdgeAheadInTile:;
- (BOOL)_findEdgeBehindInTile:;
- (BOOL)_shouldFindEdgeAhead;
- (BOOL)_shouldFindEdgeBehind;
- (id)_firstPoint;
- (id)_firstTile;
- (id)_lastTile;
- (id)_tileFinderForMap:center:radius:;
- (id)initWithMap:roadFeature:shouldFlip:;
- (unsigned long long)_connectionTypeForEdge:points:connectingTilePoint:;
@end
