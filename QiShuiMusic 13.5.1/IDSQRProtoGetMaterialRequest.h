@interface IDSQRProtoGetMaterialRequest : PBRequest
@property (nonatomic) NSMutableArray materialOwners;
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
- (void)clearMaterialOwners;
- (void)addMaterialOwners:;
- (unsigned long long)materialOwnersCount;
- (id)materialOwnersAtIndex:;
- (id)materialOwners;
- (void)setMaterialOwners:;
+ (Class)materialOwnersType;
@end
