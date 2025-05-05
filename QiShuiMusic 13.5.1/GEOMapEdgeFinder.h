@interface GEOMapEdgeFinder : GEOMapRequest
@property (nonatomic) @? edgeHandler;
@property (nonatomic) GEOMapAccess map;
- (void)cancel;
- (void).cxx_destruct;
- (id)map;
- (id)initWithMap:center:radius:;
- (void)_buildersInTile:localPoint:localRadiusSqr:localSearch:handler:;
- (BOOL)_checkEdgeForDuplicates:;
- (id)edgeHandler;
- (void)setEdgeHandler:;
- (void)findEdges:;
@end
