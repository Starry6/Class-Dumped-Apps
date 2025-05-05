@interface GEOWalkingRouteMatcher : GEORouteMatcher
- (id)initWithRoute:;
- (void)_finishRouteMatch:previousRouteMatch:forLocation:;
- (double)_maxMatchDistance:routeCoordinate:previousMatchGood:;
- (double)_modifiedHorizontalAccuracy:routeCoordinate:;
- (id)_candidateForSegment:location:previousRouteMatch:;
- (BOOL)_supportsSnapping;
@end
