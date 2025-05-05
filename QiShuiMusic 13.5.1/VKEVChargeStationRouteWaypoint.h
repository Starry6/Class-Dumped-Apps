@interface VKEVChargeStationRouteWaypoint : VKRouteWaypointInfo
@property (nonatomic) GEOComposedRouteEVChargingStationInfo chargeInfo;
@property (nonatomic) NSString chargeTimeText;
- (void).cxx_destruct;
- (id)chargeInfo;
- (void)setChargeTimeText:;
- (id)initWithWaypoint:legIndex:routeCoordinate:adjacentRouteCoordinate:;
- (id)chargeTimeText;
@end
