@interface GEONavigationBicycleMapMatcher : GEONavigationMapMatcher
@property (nonatomic) BOOL useMatchedCoordinateForMatching;
- (int)transportType;
- (id)matchLocation:transportType:;
- (void)setUseMatchedCoordinateForMatching:;
- (BOOL)_locationMeetsSpeedThresholdForRoadMatch:distanceFromRoute:;
- (BOOL)_shouldConsiderRoadMatch:overRouteMatch:forLocation:;
- (double)_approximateMaxSpeedForRoad:;
- (id)_coordinateFromLocation:;
- (double)_courseFromLocation:;
- (id)_routeMatcherForRoute:;
- (BOOL)useMatchedCoordinateForMatching;
@end
