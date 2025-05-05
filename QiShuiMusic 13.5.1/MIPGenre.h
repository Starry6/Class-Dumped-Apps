@interface MIPGenre : PBCodable
@property (nonatomic) BOOL hasStoreId;
@property (nonatomic) q storeId;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasPersistentId;
@property (nonatomic) q persistentId;
- (void)setName:;
- (BOOL)hasName;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)name;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasStoreId;
- (long long)storeId;
- (void)setStoreId:;
- (long long)persistentId;
- (void)setHasStoreId:;
- (void)setPersistentId:;
- (void)setHasPersistentId:;
- (BOOL)hasPersistentId;
@end
