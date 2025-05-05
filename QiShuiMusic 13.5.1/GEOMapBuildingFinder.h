@interface GEOMapBuildingFinder : GEOMapRequest
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithMap:centerCoordinate:radius:;
- (void)findBuildingsWithHandler:;
@end
