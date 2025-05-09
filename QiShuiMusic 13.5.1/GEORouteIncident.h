@interface GEORouteIncident : PBCodable
@property (nonatomic) BOOL hasPosition;
@property (nonatomic) GEOLatLng position;
@property (nonatomic) BOOL hasIncidentId;
@property (nonatomic) NSString incidentId;
@property (nonatomic) BOOL hasInfo;
@property (nonatomic) NSString info;
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSInteger type;
@property (nonatomic) BOOL hasStreet;
@property (nonatomic) NSString street;
@property (nonatomic) BOOL hasCrossStreet;
@property (nonatomic) NSString crossStreet;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) q startTime;
@property (nonatomic) BOOL hasEndTime;
@property (nonatomic) q endTime;
@property (nonatomic) BOOL hasUpdateTime;
@property (nonatomic) q updateTime;
@property (nonatomic) BOOL hasLaneClosureType;
@property (nonatomic) NSInteger laneClosureType;
@property (nonatomic) BOOL hasLaneClosureCount;
@property (nonatomic) I laneClosureCount;
@property (nonatomic) BOOL hasEndTimeReliable;
@property (nonatomic) BOOL endTimeReliable;
@property (nonatomic) BOOL hasSignificance;
@property (nonatomic) NSInteger significance;
@property (nonatomic) BOOL hasRestrictionInfo;
@property (nonatomic) GEORestrictionInfo restrictionInfo;
@property (nonatomic) BOOL hasUserReportsCount;
@property (nonatomic) I userReportsCount;
@property (nonatomic) BOOL hasShouldDisplayOnMap;
@property (nonatomic) BOOL shouldDisplayOnMap;
@property (nonatomic) NSMutableArray userReportIds;
@property (nonatomic) BOOL hasDelaySeconds;
@property (nonatomic) I delaySeconds;
@property (nonatomic) BOOL hasArtwork;
@property (nonatomic) GEOPBTransitArtwork artwork;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)setPosition:;
- (void)readAll:;
- (id)position;
- (id)unknownFields;
- (id)artwork;
- (BOOL)hasGreenTeaWithValue:;
- (void)setHasStartTime:;
- (id)init;
- (BOOL)hasStartTime;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (int)StringAsType:;
- (void)setHasSignificance:;
- (void)setStartTime:;
- (void)setInfo:;
- (id)initWithDictionary:;
- (BOOL)hasInfo;
- (void)clearUnknownFields:;
- (void)setType:;
- (void)writeTo:;
- (void)setHasType:;
- (BOOL)hasType;
- (void)setEndTime:;
- (BOOL)hasSignificance;
- (unsigned long long)hash;
- (long long)startTime;
- (void)copyTo:;
- (id)typeAsString:;
- (void)mergeFrom:;
- (long long)endTime;
- (int)type;
- (id)initWithData:;
- (void).cxx_destruct;
- (void)setSignificance:;
- (BOOL)readFrom:;
- (id)description;
- (id)info;
- (void)setArtwork:;
- (int)significance;
- (id)dictionaryRepresentation;
- (long long)updateTime;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setUpdateTime:;
- (BOOL)hasIncidentId;
- (id)incidentId;
- (void)setIncidentId:;
- (BOOL)hasArtwork;
- (BOOL)hasPosition;
- (BOOL)hasStreet;
- (id)street;
- (void)setStreet:;
- (BOOL)hasCrossStreet;
- (id)crossStreet;
- (void)setCrossStreet:;
- (void)setHasEndTime:;
- (BOOL)hasEndTime;
- (void)setHasUpdateTime:;
- (BOOL)hasUpdateTime;
- (int)laneClosureType;
- (void)setLaneClosureType:;
- (void)setHasLaneClosureType:;
- (BOOL)hasLaneClosureType;
- (id)laneClosureTypeAsString:;
- (int)StringAsLaneClosureType:;
- (unsigned int)laneClosureCount;
- (void)setLaneClosureCount:;
- (void)setHasLaneClosureCount:;
- (BOOL)hasLaneClosureCount;
- (BOOL)endTimeReliable;
- (void)setEndTimeReliable:;
- (void)setHasEndTimeReliable:;
- (BOOL)hasEndTimeReliable;
- (id)significanceAsString:;
- (int)StringAsSignificance:;
- (BOOL)hasRestrictionInfo;
- (id)restrictionInfo;
- (void)setRestrictionInfo:;
- (unsigned int)userReportsCount;
- (void)setUserReportsCount:;
- (void)setHasUserReportsCount:;
- (BOOL)hasUserReportsCount;
- (BOOL)shouldDisplayOnMap;
- (void)setShouldDisplayOnMap:;
- (void)setHasShouldDisplayOnMap:;
- (BOOL)hasShouldDisplayOnMap;
- (id)userReportIds;
- (void)setUserReportIds:;
- (void)clearUserReportIds;
- (void)addUserReportId:;
- (unsigned long long)userReportIdsCount;
- (id)userReportIdAtIndex:;
- (unsigned int)delaySeconds;
- (void)setDelaySeconds:;
- (void)setHasDelaySeconds:;
- (BOOL)hasDelaySeconds;
+ (BOOL)isValid:;
+ (Class)userReportIdType;
@end
