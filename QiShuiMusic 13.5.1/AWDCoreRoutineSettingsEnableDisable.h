@interface AWDCoreRoutineSettingsEnableDisable : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) NSString sessionId;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) NSInteger enabled;
- (void)setSessionId:;
- (id)sessionId;
- (BOOL)hasSessionId;
- (void)dealloc;
- (void)setHasEnabled:;
- (BOOL)hasEnabled;
- (int)enabled;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (void)setEnabled:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
