@interface GEORouteInitializerData : NSObject
@property (nonatomic) NSArray waypoints;
@property (nonatomic) GEODirectionsRequest directionsRequest;
@property (nonatomic) GEODirectionsResponse directionsResponse;
@property (nonatomic) GEOETATrafficUpdateResponse etaTrafficUpdateResponse;
@property (nonatomic) GEORouteAttributes routeAttributes;
@property (nonatomic) GEOStyleAttributes styleAttributes;
- (id)allRoutes;
- (id)allRouteInfos;
- (id)routeInfosWithMaxCount:;
- (id)mainRouteInfo;
- (id)allETAUAlternateRouteInfos;
- (id)nonRecommendedRoutes;
- (id)_allRouteInfosWithTypes:maxCount:;
- (id)directionsResponse;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)directionsRequest;
- (id)waypoints;
- (id)styleAttributes;
- (id)routeAttributes;
- (id)initWithWaypoints:routeAttributes:directionsResponse:;
- (id)initWithWaypoints:routeAttributes:etauResponse:styleAttributes:;
- (id)initWithWaypoints:routeAttributes:directionsResponse:directionsRequest:;
- (id)etaTrafficUpdateResponse;
+ (BOOL)supportsSecureCoding;
@end
