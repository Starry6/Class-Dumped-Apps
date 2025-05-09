@interface GEORPDirectionsFeedbackContext : PBCodable
@property (nonatomic) NSMutableArray directionsRequests;
@property (nonatomic) NSMutableArray directionsResponses;
@property (nonatomic) NSMutableArray directionsWaypointPlaceInfos;
@property (nonatomic) BOOL hasStartWaypoint;
@property (nonatomic) GEORPUserSearchInput startWaypoint;
@property (nonatomic) BOOL hasEndWaypoint;
@property (nonatomic) GEORPUserSearchInput endWaypoint;
@property (nonatomic) NSMutableArray routes;
@property (nonatomic) NSMutableArray rerouteLocations;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (BOOL)hasGreenTeaWithValue:;
- (id)init;
- (void)clearSensitiveFields:;
- (id)routes;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)directionsRequests;
- (void)setDirectionsRequests:;
- (void)clearDirectionsRequests;
- (void)addDirectionsRequest:;
- (unsigned long long)directionsRequestsCount;
- (id)directionsRequestAtIndex:;
- (id)directionsResponses;
- (void)setDirectionsResponses:;
- (void)clearDirectionsResponses;
- (void)addDirectionsResponse:;
- (unsigned long long)directionsResponsesCount;
- (id)directionsResponseAtIndex:;
- (id)directionsWaypointPlaceInfos;
- (void)setDirectionsWaypointPlaceInfos:;
- (void)clearDirectionsWaypointPlaceInfos;
- (void)addDirectionsWaypointPlaceInfo:;
- (unsigned long long)directionsWaypointPlaceInfosCount;
- (id)directionsWaypointPlaceInfoAtIndex:;
- (BOOL)hasStartWaypoint;
- (id)startWaypoint;
- (void)setStartWaypoint:;
- (BOOL)hasEndWaypoint;
- (id)endWaypoint;
- (void)setEndWaypoint:;
- (void)setRoutes:;
- (void)clearRoutes;
- (void)addRoute:;
- (unsigned long long)routesCount;
- (id)routeAtIndex:;
- (id)rerouteLocations;
- (void)setRerouteLocations:;
- (void)clearRerouteLocations;
- (void)addRerouteLocation:;
- (unsigned long long)rerouteLocationsCount;
- (id)rerouteLocationAtIndex:;
+ (BOOL)isValid:;
+ (Class)routeType;
+ (Class)directionsRequestType;
+ (Class)directionsResponseType;
+ (Class)directionsWaypointPlaceInfoType;
+ (Class)rerouteLocationType;
@end
