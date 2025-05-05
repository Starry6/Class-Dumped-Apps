@interface NWPBAddressEndpoint : PBCodable
@property (nonatomic) BOOL hasAddress;
@property (nonatomic) NSData address;
- (void)writeTo:;
- (void)setAddress:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)address;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasAddress;
@end
