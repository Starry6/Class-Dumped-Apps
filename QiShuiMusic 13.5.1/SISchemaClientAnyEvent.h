@interface SISchemaClientAnyEvent : PBCodable
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) NSInteger eventType;
@property (nonatomic) BOOL hasEventData;
@property (nonatomic) NSData eventData;
- (void)writeTo:;
- (int)eventType;
- (void)setEventType:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setHasEventType:;
- (void).cxx_destruct;
- (BOOL)hasEventType;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventData;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasEventData;
- (void)setEventData:;
- (id)si_dictionaryRepresentation;
@end
