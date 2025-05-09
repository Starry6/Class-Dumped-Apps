@interface GEOLogMsgStateUserSession : PBCodable
@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) {GEOSessionID=QQ} sessionId;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) I sequenceNumber;
@property (nonatomic) BOOL hasRelativeTimestamp;
@property (nonatomic) double relativeTimestamp;
@property (nonatomic) BOOL hasNavSessionId;
@property (nonatomic) {GEOSessionID=QQ} navSessionId;
@property (nonatomic) BOOL hasNavSessionRelativeTimestamp;
@property (nonatomic) double navSessionRelativeTimestamp;
@property (nonatomic) BOOL hasEventTime;
@property (nonatomic) GEOLocalTime eventTime;
@property (nonatomic) BOOL hasSessionEpoch;
@property (nonatomic) Q sessionEpoch;
@property (nonatomic) BOOL hasAgeOfSessionIdInSeconds;
@property (nonatomic) double ageOfSessionIdInSeconds;
@property (nonatomic) BOOL hasPreSyncSessionId;
@property (nonatomic) {GEOSessionID=QQ} preSyncSessionId;
@property (nonatomic) BOOL hasInitialDeviceSessionId;
@property (nonatomic) {GEOSessionID=QQ} initialDeviceSessionId;
- (void)readAll:;
- (BOOL)hasNavSessionId;
- (void)setSessionId:;
- (void)setHasSessionId:;
- (void)setEventTime:;
- (id)sessionId;
- (void)setHasSequenceNumber:;
- (void)setSessionEpoch:;
- (BOOL)hasSessionId;
- (BOOL)hasEventTime;
- (BOOL)hasSequenceNumber;
- (void)setRelativeTimestamp:;
- (BOOL)hasSessionEpoch;
- (unsigned long long)sessionEpoch;
- (id)initWithJSON:;
- (BOOL)hasNavSessionRelativeTimestamp;
- (id)jsonRepresentation;
- (double)relativeTimestamp;
- (void)setNavSessionRelativeTimestamp:;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)navSessionId;
- (id)eventTime;
- (unsigned long long)hash;
- (BOOL)hasPreSyncSessionId;
- (void)copyTo:;
- (void)setHasRelativeTimestamp:;
- (void)mergeFrom:;
- (void)setSequenceNumber:;
- (void)setNavSessionId:;
- (void)setHasAgeOfSessionIdInSeconds:;
- (void)setAgeOfSessionIdInSeconds:;
- (void)setHasNavSessionRelativeTimestamp:;
- (void)setInitialDeviceSessionId:;
- (unsigned int)sequenceNumber;
- (void).cxx_destruct;
- (void)setHasInitialDeviceSessionId:;
- (BOOL)readFrom:;
- (BOOL)hasAgeOfSessionIdInSeconds;
- (void)setHasSessionEpoch:;
- (id)description;
- (double)ageOfSessionIdInSeconds;
- (id)initialDeviceSessionId;
- (id)preSyncSessionId;
- (BOOL)hasInitialDeviceSessionId;
- (void)setHasNavSessionId:;
- (id)dictionaryRepresentation;
- (void)setPreSyncSessionId:;
- (void)setHasPreSyncSessionId:;
- (BOOL)isEqual:;
- (BOOL)hasRelativeTimestamp;
- (id)copyWithZone:;
- (double)navSessionRelativeTimestamp;
+ (BOOL)isValid:;
@end
