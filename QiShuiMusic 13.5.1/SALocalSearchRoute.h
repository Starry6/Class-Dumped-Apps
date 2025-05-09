@interface SALocalSearchRoute : AceObject
@property (nonatomic) NSData routeTrafficIncident;
@property (nonatomic) NSData etaFilter;
@property (nonatomic) NSData evChargingMetadata;
@property (nonatomic) NSData originalWaypointRoute;
@property (nonatomic) NSData routeAsZilchBinary;
@property (nonatomic) NSData routeId;
@property (nonatomic) NSArray routeIncidentOffsets;
@property (nonatomic) NSArray routeIncidents;
@property (nonatomic) NSData sessionState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setSessionState:;
- (id)sessionState;
- (id)encodedClassName;
- (id)routeId;
- (void)setRouteId:;
- (id)routeIncidents;
- (id)originalWaypointRoute;
- (void)setOriginalWaypointRoute:;
- (id)routeIncidentOffsets;
- (void)setRouteIncidentOffsets:;
- (void)setRouteIncidents:;
- (id)routeTrafficIncident;
- (void)setRouteTrafficIncident:;
- (id)etaFilter;
- (void)setEtaFilter:;
- (id)evChargingMetadata;
- (void)setEvChargingMetadata:;
- (id)routeAsZilchBinary;
- (void)setRouteAsZilchBinary:;
+ (id)route;
+ (id)routeWithDictionary:context:;
@end
