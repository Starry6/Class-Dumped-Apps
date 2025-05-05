@interface NRPBProperty : PBCodable
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) NRPBPropertyValue value;
- (void)setName:;
- (BOOL)hasValue;
- (BOOL)hasName;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setValue:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)value;
- (id)name;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
