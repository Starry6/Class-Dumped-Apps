@interface GEOPathMatcherRoadLookup : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (id)keyForRoad:;
- (id)roadForKey:;
- (id)flippedRoad:;
- (id)findRoadWithMuid:nearCoordinate:;
- (id)findRoadsNearCoordinate:radius:;
- (id)findOutgoingRoadsFrom:;
- (id)_roadForKey:;
- (void)_cacheRoad:;
@end
