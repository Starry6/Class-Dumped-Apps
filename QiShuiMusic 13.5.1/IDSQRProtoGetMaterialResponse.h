@interface IDSQRProtoGetMaterialResponse : PBCodable
@property (nonatomic) NSMutableArray materials;
- (id)materials;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)clearMaterials;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (void)setMaterials:;
- (id)description;
- (unsigned long long)materialsCount;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)addMaterials:;
- (id)materialsAtIndex:;
+ (Class)materialsType;
@end
