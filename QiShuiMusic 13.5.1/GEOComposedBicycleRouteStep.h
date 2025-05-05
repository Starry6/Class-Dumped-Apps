@interface GEOComposedBicycleRouteStep : GEOComposedRouteStep
- (id)initWithComposedRoute:geoRouteLeg:geoStep:stepIndex:startRouteCoordinate:endRouteCoordinate:maneuverStartRouteCoordinate:;
- (id)initWithComposedRoute:geoRouteLeg:geoStep:stepIndex:pointRange:maneuverPointRange:;
@end
