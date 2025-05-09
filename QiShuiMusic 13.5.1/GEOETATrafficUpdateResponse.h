@interface GEOETATrafficUpdateResponse : PBCodable
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL hasClientMetrics;
@property (nonatomic) GEOClientMetrics clientMetrics;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSMutableArray routes;
@property (nonatomic) BOOL hasWaypointRoute;
@property (nonatomic) GEOETATrafficUpdateWaypointRoute waypointRoute;
@property (nonatomic) BOOL hasSessionState;
@property (nonatomic) NSData sessionState;
@property (nonatomic) BOOL hasDatasetAbStatus;
@property (nonatomic) GEOPDDatasetABStatus datasetAbStatus;
@property (nonatomic) NSMutableArray cameras;
@property (nonatomic) BOOL hasResponseId;
@property (nonatomic) NSData responseId;
@property (nonatomic) BOOL hasDebugData;
@property (nonatomic) NSString debugData;
@property (nonatomic) NSMutableArray trafficSignals;
@property (nonatomic) NSMutableArray arrivalParameters;
@property (nonatomic) Q problemDetailsCount;
@property (nonatomic) ^{GEOProblemDetail=ii{?=b1b1}} problemDetails;
@property (nonatomic) BOOL hasDisplayedEta;
@property (nonatomic) I displayedEta;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)_addDebugArguments:;
- (void)addFakeTrafficIncidentAlert:mainRouteInfo:alternateRouteInfo:;
- (void)readAll:;
- (void)setStatus:;
- (id)unknownFields;
- (BOOL)hasStatus;
- (BOOL)hasGreenTeaWithValue:;
- (id)init;
- (id)routes;
- (void)dealloc;
- (id)initWithJSON:;
- (id)statusAsString:;
- (id)jsonRepresentation;
- (void)setSessionState:;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (id)sessionState;
- (void)copyTo:;
- (void)setHasStatus:;
- (void)mergeFrom:;
- (void)setDatasetAbStatus:;
- (id)initWithData:;
- (BOOL)hasDatasetAbStatus;
- (void).cxx_destruct;
- (id)datasetAbStatus;
- (BOOL)readFrom:;
- (id)description;
- (int)status;
- (id)dictionaryRepresentation;
- (BOOL)hasClientMetrics;
- (BOOL)isEqual:;
- (int)StringAsStatus:;
- (void)setClientMetrics:;
- (id)clientMetrics;
- (id)copyWithZone:;
- (BOOL)hasResponseId;
- (id)responseId;
- (void)setResponseId:;
- (void)setRoutes:;
- (void)clearRoutes;
- (void)addRoute:;
- (unsigned long long)routesCount;
- (id)routeAtIndex:;
- (id)cameras;
- (id)arrivalParameters;
- (void)setArrivalParameters:;
- (void)clearArrivalParameters;
- (void)addArrivalParameters:;
- (unsigned long long)arrivalParametersCount;
- (id)arrivalParametersAtIndex:;
- (id)trafficSignals;
- (void)setTrafficSignals:;
- (void)clearTrafficSignals;
- (void)addTrafficSignal:;
- (unsigned long long)trafficSignalsCount;
- (id)trafficSignalAtIndex:;
- (BOOL)hasSessionState;
- (id)_geoTrafficCameras;
- (id)_geoTrafficSignals;
- (unsigned long long)problemDetailsCount;
- (id)problemDetails;
- (void)clearProblemDetails;
- (void)addProblemDetail:;
- (id)problemDetailAtIndex:;
- (void)setProblemDetails:count:;
- (BOOL)hasDebugData;
- (id)debugData;
- (void)setDebugData:;
- (BOOL)hasWaypointRoute;
- (id)waypointRoute;
- (void)setWaypointRoute:;
- (unsigned int)displayedEta;
- (void)setDisplayedEta:;
- (void)setHasDisplayedEta:;
- (BOOL)hasDisplayedEta;
- (void)setCameras:;
- (void)clearCameras;
- (void)addCamera:;
- (unsigned long long)camerasCount;
- (id)cameraAtIndex:;
+ (BOOL)isValid:;
+ (Class)routeType;
+ (Class)cameraType;
+ (Class)arrivalParametersType;
+ (Class)trafficSignalType;
@end
