@interface BMPBSiriIntentEvent : PBCodable
@property (nonatomic) BOOL hasIntentId;
@property (nonatomic) NSString intentId;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) NSString eventType;
@property (nonatomic) BOOL hasEventData;
@property (nonatomic) NSData eventData;
- (void)writeTo:;
- (id)eventType;
- (void)setEventType:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)intentId;
- (void).cxx_destruct;
- (void)setIntentId:;
- (BOOL)hasEventType;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventData;
- (BOOL)isEqual:;
- (BOOL)hasIntentId;
- (id)copyWithZone:;
- (BOOL)hasEventData;
- (void)setEventData:;
@end
