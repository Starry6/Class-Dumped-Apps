@interface AWDCoreRoutineSettingsClusterView : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) NSString sessionId;
@property (nonatomic) BOOL hasClusterCount;
@property (nonatomic) NSInteger clusterCount;
@property (nonatomic) BOOL hasElsewhereCount;
@property (nonatomic) NSInteger elsewhereCount;
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
- (int)clusterCount;
- (void)setClusterCount:;
- (void)setHasClusterCount:;
- (BOOL)hasClusterCount;
- (void)setElsewhereCount:;
- (void)setHasElsewhereCount:;
- (BOOL)hasElsewhereCount;
- (int)elsewhereCount;
@end
