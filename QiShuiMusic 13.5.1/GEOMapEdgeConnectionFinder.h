@interface GEOMapEdgeConnectionFinder : GEOMapRequest
- (void)cancel;
- (void).cxx_destruct;
- (void)_findConnections:incoming:;
- (id)initWithMap:tile:junction:coordinate:;
- (void)findConnectionsOut:;
- (void)findConnectionsIn:;
@end
