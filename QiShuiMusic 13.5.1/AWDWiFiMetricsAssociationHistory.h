@interface AWDWiFiMetricsAssociationHistory : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) NSMutableArray associationEvents;
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
- (void)clearAssociationEvents;
- (void)addAssociationEvents:;
- (unsigned long long)associationEventsCount;
- (id)associationEventsAtIndex:;
- (id)associationEvents;
- (void)setAssociationEvents:;
+ (Class)associationEventsType;
@end
