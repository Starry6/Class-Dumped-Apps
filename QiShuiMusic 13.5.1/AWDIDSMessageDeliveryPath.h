@interface AWDIDSMessageDeliveryPath : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasService;
@property (nonatomic) NSString service;
@property (nonatomic) BOOL hasDeliveryPathType;
@property (nonatomic) I deliveryPathType;
- (void)setService:;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (id)service;
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
- (BOOL)hasService;
- (void)setDeliveryPathType:;
- (void)setHasDeliveryPathType:;
- (BOOL)hasDeliveryPathType;
- (unsigned int)deliveryPathType;
@end
