@interface IDSQRProtoMaterialInfo : PBCodable
@property (nonatomic) NSData materialId;
@property (nonatomic) NSInteger materialType;
@property (nonatomic) NSData materialContent;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (int)materialType;
- (id)materialTypeAsString:;
- (int)StringAsMaterialType:;
- (id)materialId;
- (void)setMaterialId:;
- (void)setMaterialType:;
- (id)materialContent;
- (void)setMaterialContent:;
@end
