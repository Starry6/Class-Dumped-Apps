@interface AWDIMessageDeliveredMessage : PBCodable
@property (nonatomic) BOOL hasGuid;
@property (nonatomic) NSString guid;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasDeliveryDuration;
@property (nonatomic) I deliveryDuration;
- (BOOL)hasGuid;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (void)setGuid:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)guid;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned int)deliveryDuration;
- (void)setDeliveryDuration:;
- (void)setHasDeliveryDuration:;
- (BOOL)hasDeliveryDuration;
@end
