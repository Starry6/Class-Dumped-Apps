@interface CLPTraceCollectionRequest : PBRequest
@property (nonatomic) CLPMeta meta;
@property (nonatomic) NSMutableArray events;
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSInteger type;
- (id)meta;
- (void)addEvents:;
- (Class)responseClass;
- (id)eventsAtIndex:;
- (int)StringAsType:;
- (void)setType:;
- (void)writeTo:;
- (void)setHasType:;
- (BOOL)hasType;
- (unsigned long long)hash;
- (void)copyTo:;
- (id)typeAsString:;
- (void)setMeta:;
- (void)mergeFrom:;
- (void)setEvents:;
- (int)type;
- (void).cxx_destruct;
- (id)events;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (void)clearEvents;
- (unsigned long long)eventsCount;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (Class)eventsType;
@end
