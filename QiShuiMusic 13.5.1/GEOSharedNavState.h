@interface GEOSharedNavState : PBCodable
@property (nonatomic) BOOL hasDestinationInfo;
@property (nonatomic) GEOMapItemStorage destinationInfo;
@property (nonatomic) NSMutableArray etaInfos;
@property (nonatomic) BOOL hasRouteInfo;
@property (nonatomic) GEOSharedNavRouteInfo routeInfo;
@property (nonatomic) BOOL hasSenderInfo;
@property (nonatomic) GEOSharedNavSenderInfo senderInfo;
@property (nonatomic) BOOL hasGroupIdentifier;
@property (nonatomic) NSString groupIdentifier;
@property (nonatomic) BOOL hasArrived;
@property (nonatomic) BOOL arrived;
@property (nonatomic) BOOL hasClosed;
@property (nonatomic) BOOL closed;
@property (nonatomic) BOOL hasReferenceFrame;
@property (nonatomic) NSInteger referenceFrame;
@property (nonatomic) BOOL hasMuted;
@property (nonatomic) BOOL muted;
@property (nonatomic) BOOL hasUpdatedTimestamp;
@property (nonatomic) double updatedTimestamp;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) I transportType;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) I protocolVersion;
@property (nonatomic) BOOL hasLocalUpdatedTimestamp;
@property (nonatomic) double localUpdatedTimestamp;
@property (nonatomic) NSMutableArray waypointInfos;
@property (nonatomic) BOOL hasCurrentWaypointIndex;
@property (nonatomic) I currentWaypointIndex;
@property (nonatomic) BOOL hasLastLocation;
@property (nonatomic) GEOSharedNavLocationInfo lastLocation;
@property (nonatomic) BOOL hasResumed;
@property (nonatomic) BOOL resumed;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)setReferenceFrame:;
- (BOOL)muted;
- (unsigned int)protocolVersion;
- (void)setClosed:;
- (id)routeInfo;
- (void)setLastLocation:;
- (void)setProtocolVersion:;
- (void)readAll:;
- (id)lastLocation;
- (id)unknownFields;
- (void)setRouteInfo:;
- (BOOL)hasGreenTeaWithValue:;
- (void)setTransportType:;
- (id)init;
- (void)clearSensitiveFields:;
- (BOOL)hasReferenceFrame;
- (id)groupIdentifier;
- (id)initWithJSON:;
- (void)setGroupIdentifier:;
- (id)jsonRepresentation;
- (BOOL)hasGroupIdentifier;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (void)setMuted:;
- (unsigned int)transportType;
- (void)setHasProtocolVersion:;
- (unsigned long long)hash;
- (int)referenceFrame;
- (void)copyTo:;
- (BOOL)hasTransportType;
- (void)mergeFrom:;
- (BOOL)hasRouteInfo;
- (int)StringAsReferenceFrame:;
- (BOOL)hasProtocolVersion;
- (void)setHasReferenceFrame:;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)referenceFrameAsString:;
- (BOOL)readFrom:;
- (id)description;
- (void)setHasTransportType:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)closed;
- (BOOL)hasDestinationInfo;
- (id)destinationInfo;
- (void)setDestinationInfo:;
- (id)etaInfos;
- (void)setEtaInfos:;
- (void)clearEtaInfos;
- (void)addEtaInfo:;
- (unsigned long long)etaInfosCount;
- (id)etaInfoAtIndex:;
- (BOOL)hasSenderInfo;
- (id)senderInfo;
- (void)setSenderInfo:;
- (BOOL)arrived;
- (void)setArrived:;
- (void)setHasArrived:;
- (BOOL)hasArrived;
- (void)setHasClosed:;
- (BOOL)hasClosed;
- (void)setHasMuted:;
- (BOOL)hasMuted;
- (double)updatedTimestamp;
- (void)setUpdatedTimestamp:;
- (void)setHasUpdatedTimestamp:;
- (BOOL)hasUpdatedTimestamp;
- (double)localUpdatedTimestamp;
- (void)setLocalUpdatedTimestamp:;
- (void)setHasLocalUpdatedTimestamp:;
- (BOOL)hasLocalUpdatedTimestamp;
- (id)waypointInfos;
- (void)setWaypointInfos:;
- (void)clearWaypointInfos;
- (void)addWaypointInfo:;
- (unsigned long long)waypointInfosCount;
- (id)waypointInfoAtIndex:;
- (unsigned int)currentWaypointIndex;
- (void)setCurrentWaypointIndex:;
- (void)setHasCurrentWaypointIndex:;
- (BOOL)hasCurrentWaypointIndex;
- (BOOL)hasLastLocation;
- (BOOL)resumed;
- (void)setResumed:;
- (void)setHasResumed:;
- (BOOL)hasResumed;
+ (BOOL)isValid:;
+ (Class)etaInfoType;
+ (Class)waypointInfoType;
@end
