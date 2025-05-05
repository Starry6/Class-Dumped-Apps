@interface GEOComposedDrivingRouteStep : GEOComposedRouteStep
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithComposedRoute:geoRouteLeg:geoStep:stepIndex:startRouteCoordinate:endRouteCoordinate:maneuverStartRouteCoordinate:;
- (id)initWithComposedRoute:geoRouteLeg:geoStep:stepIndex:pointRange:maneuverPointRange:;
- (id)evInfo;
+ (BOOL)supportsSecureCoding;
@end
