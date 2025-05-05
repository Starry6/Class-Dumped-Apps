@interface GEOMapTransitGeometryFinder : GEOMapRequest
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithMap:transitID:coordinate:;
- (void)findTransitGeometryWithHandler:;
@end
