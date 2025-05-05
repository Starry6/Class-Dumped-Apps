@interface AWDCoreRoutineSettingsClusterLocationVisitView : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) NSString sessionId;
@property (nonatomic) BOOL hasDeletionCount;
@property (nonatomic) NSInteger deletionCount;
- (void)setSessionId:;
- (id)sessionId;
- (BOOL)hasSessionId;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (int)deletionCount;
- (void)setDeletionCount:;
- (void)setHasDeletionCount:;
- (BOOL)hasDeletionCount;
@end
