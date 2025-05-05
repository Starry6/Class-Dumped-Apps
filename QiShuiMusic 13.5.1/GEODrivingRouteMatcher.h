@interface GEODrivingRouteMatcher : GEORouteMatcher
- (id)initWithRoute:;
- (void)_finishRouteMatch:previousRouteMatch:forLocation:;
- (double)_modifiedHorizontalAccuracy:routeCoordinate:;
- (id)_candidateForSegment:location:previousRouteMatch:;
- (BOOL)_supportsSnapping;
- (id)_coordinateFromLocation:;
- (double)_courseFromLocation:;
- (id)_startStepForPreviousRouteMatch:;
- (double)_maxMatchDistance:routeCoordinate:previousRouteMatch:timeSinceTunnel:;
- (double)_courseWeightForLocation:accuracyType:;
- (double)_modifiedCourseAccuracyForLocation:previousRouteMatch:;
- (double)_maxCourseDelta:previousRouteMatch:timeSinceTunnel:;
@end
