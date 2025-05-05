@interface GEOMapEdgeRoadConnectionFinder : GEOMapEdgeConnectionFinder
- (void)_findConnectedEdges:incoming:;
- (void)_findConnections:incoming:;
- (BOOL)_isRoadEdgeEqual:other:;
@end
