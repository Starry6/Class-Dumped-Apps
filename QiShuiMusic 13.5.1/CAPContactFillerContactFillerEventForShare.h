@interface CAPContactFillerContactFillerEventForShare : PBCodable
@property (nonatomic) NSString sessionId;
@property (nonatomic) NSMutableArray shareEvents;
- (void)setSessionId:;
- (id)sessionId;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearShareEvents;
- (void)addShareEvents:;
- (unsigned long long)shareEventsCount;
- (id)shareEventsAtIndex:;
- (id)shareEvents;
- (void)setShareEvents:;
+ (Class)shareEventsType;
@end
