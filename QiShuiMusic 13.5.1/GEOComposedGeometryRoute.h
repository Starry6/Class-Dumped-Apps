@interface GEOComposedGeometryRoute : GEOComposedRoute
- (id)initWithRoutingPathData:;
- (id)initWithRoutingPathData:trafficColors:destination:;
- (id)initWithRoutingPathData:trafficColors:destinations:;
- (id)initSingleLegRouteWithCoordinates:count:;
@end
