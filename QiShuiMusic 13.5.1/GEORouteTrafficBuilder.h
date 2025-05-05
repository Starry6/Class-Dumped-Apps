@interface GEORouteTrafficBuilder : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)trafficColors;
- (void)buildTrafficForRoute:;
- (void)buildTrafficForRoute:etaRoute:;
- (void)_buildTrafficForRoute:etaRoute:;
- (void)_buildTrafficForRoute:toDistance:;
- (void)addTrafficFromRoute:withStepRange:;
- (void)addTrafficFromRoute:from:to:;
- (void)addTrafficFromETARoute:;
- (void)_removeDuplicateTraffic;
- (void)copyTrafficToRoute:;
- (id)trafficOffsets;
@end
