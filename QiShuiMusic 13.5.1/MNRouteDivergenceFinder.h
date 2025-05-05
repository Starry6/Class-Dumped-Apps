@interface MNRouteDivergenceFinder : NSObject
@property (nonatomic) double toleranceMeters;
@property (nonatomic) double minLengthMetersForConvergence;
- (id)init;
- (id)findFirstUniqueRangeBetweenRoute:andRoute:;
- (id)findOverlappingSectionsForRoutes:;
- (id)findFirstDivergenceBetweenRoute:andRoute:;
- (id)findFirstConvergenceBetweenRoute:andRoute:;
- (id)findFirstDivergenceBetweenRoute:fromRouteCoordinate:andRoute:fromRouteCoordinate:;
- (id)findFirstConvergenceBetweenRoute:fromRouteCoordinate:andRoute:fromRouteCoordinate:;
- (id)findAllDivergenceConvergenceBetweenRoute:andRoute:;
- (id)findAllOverlapRangesBetweenRoutes:;
- (void)_findFirstDivergenceBetweenRoute:range:andRoute:range:outRouteCoordinate:outRouteCoordinate:;
- (BOOL)_pathsDivergeBetweenRoute:from:andRoute:from:withinDistance:;
- (void)_findFirstConvergenceBetweenRoute:fromRouteCoordinate:andRoute:fromRouteCoordinate:outRouteCoordinate:outRouteCoordinate:;
- (void)_findFirstConvergenceBetweenRoute:range:andRoute:range:outRouteCoordinate:outRouteCoordinate:;
- (void)_populateConvergencePoints:route:range:isRouteA:;
- (BOOL)_pointMeetsConvergenceThreshold:withOtherPoint:outRouteCoordinateA:outRouteCoordinateB:outDistance:;
- (id)_firstRouteCoordinateWithinToleranceOnRoute:nearCoordinate:range:;
- (double)_distanceFromCoordinate:toSegmentStart:segmentEnd:;
- (id)_closestRouteCoordinateOnRoute:toLocationCoordinate:inRange:;
- (id)_routeCoordinateForLocationCoordinate:route:startIndex:;
- (double)_offsetForCoordinate:alongSegmentStart:segmentEnd:;
- (id)_stringForCoordinate:;
- (double)toleranceMeters;
- (void)setToleranceMeters:;
- (double)minLengthMetersForConvergence;
- (void)setMinLengthMetersForConvergence:;
@end
