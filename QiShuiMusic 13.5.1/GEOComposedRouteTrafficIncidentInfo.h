@interface GEOComposedRouteTrafficIncidentInfo : NSObject
@property (nonatomic) GEORouteIncident incident;
@property (nonatomic) double offsetMeters;
@property (nonatomic) {?=If} routeCoordinate;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)routeCoordinate;
- (double)offsetMeters;
- (void)setOffsetMeters:;
- (void)setRouteCoordinate:;
- (id)incident;
- (void)setIncident:;
+ (BOOL)supportsSecureCoding;
@end
