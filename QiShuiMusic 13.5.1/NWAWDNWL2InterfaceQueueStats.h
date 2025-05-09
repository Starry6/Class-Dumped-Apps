@interface NWAWDNWL2InterfaceQueueStats : PBCodable
@property (nonatomic) BOOL hasInterfaceType;
@property (nonatomic) NSInteger interfaceType;
@property (nonatomic) BOOL hasInterfaceName;
@property (nonatomic) NSString interfaceName;
@property (nonatomic) BOOL hasSlot;
@property (nonatomic) NSInteger slot;
@property (nonatomic) BOOL hasAvgQueueDelay;
@property (nonatomic) Q avgQueueDelay;
@property (nonatomic) BOOL hasMinQueueDelay;
@property (nonatomic) Q minQueueDelay;
@property (nonatomic) BOOL hasMaxQueueDelay;
@property (nonatomic) Q maxQueueDelay;
- (int)slot;
- (void)setInterfaceType:;
- (int)interfaceType;
- (void)setInterfaceName:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setSlot:;
- (BOOL)hasInterfaceType;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)interfaceName;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasInterfaceType:;
- (id)interfaceTypeAsString:;
- (int)StringAsInterfaceType:;
- (BOOL)hasInterfaceName;
- (void)setHasSlot:;
- (BOOL)hasSlot;
- (id)slotAsString:;
- (int)StringAsSlot:;
- (void)setAvgQueueDelay:;
- (void)setHasAvgQueueDelay:;
- (BOOL)hasAvgQueueDelay;
- (void)setMinQueueDelay:;
- (void)setHasMinQueueDelay:;
- (BOOL)hasMinQueueDelay;
- (void)setMaxQueueDelay:;
- (void)setHasMaxQueueDelay:;
- (BOOL)hasMaxQueueDelay;
- (unsigned long long)avgQueueDelay;
- (unsigned long long)minQueueDelay;
- (unsigned long long)maxQueueDelay;
@end
