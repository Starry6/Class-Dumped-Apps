@interface NRPBDevicePropertyDiff : PBCodable
@property (nonatomic) BOOL hasValue;
@property (nonatomic) NRPBPropertyValue value;
- (BOOL)hasValue;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setValue:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)value;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
