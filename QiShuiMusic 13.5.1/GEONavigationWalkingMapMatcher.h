@interface GEONavigationWalkingMapMatcher : GEONavigationMapMatcher
- (int)transportType;
- (id)matchLocation:transportType:;
- (id)_routeMatcherForRoute:;
@end
