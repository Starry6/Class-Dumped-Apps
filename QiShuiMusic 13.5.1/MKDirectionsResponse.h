@interface MKDirectionsResponse : NSObject
@property (nonatomic) NSURL _mapsURL;
@property (nonatomic) GEODirectionsResponse _geoResponse;
@property (nonatomic) NSString _incidentDescription;
@property (nonatomic) MKMapItem source;
@property (nonatomic) MKMapItem destination;
@property (nonatomic) NSArray routes;
- (id)routes;
- (id)destination;
- (void).cxx_destruct;
- (id)source;
- (id)_mapsURL;
- (id)_initWithGEORouteResponse:routeRequest:request:origin:destination:;
- (id)_incidentDescription;
- (id)_geoResponse;
+ (id)_responseWithGEODirectionsRouteResponse:routeRequest:request:origin:destination:error:;
@end
