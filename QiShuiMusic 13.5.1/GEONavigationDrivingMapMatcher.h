@interface GEONavigationDrivingMapMatcher : GEONavigationMapMatcher
@property (nonatomic) BOOL useMatchedCoordinateForMatching;
- (int)transportType;
- (void).cxx_destruct;
- (id)matchLocation:transportType:;
- (void)setUseMatchedCoordinateForMatching:;
- (BOOL)_locationMeetsSpeedThresholdForRoadMatch:distanceFromRoute:;
- (BOOL)_shouldConsiderRoadMatch:overRouteMatch:forLocation:;
- (double)_approximateMaxSpeedForRoad:;
- (id)_effectiveLocationForLocation:;
- (id)_coordinateFromLocation:;
- (double)_courseFromLocation:;
- (id)_routeMatcherForRoute:;
- (BOOL)useMatchedCoordinateForMatching;
@end
