@interface MIPSeries : PBCodable
@property (nonatomic) BOOL hasStoreId;
@property (nonatomic) q storeId;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasSortName;
@property (nonatomic) NSString sortName;
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
- (id)sortName;
- (void)setStoreId:;
- (void)setHasStoreId:;
- (BOOL)hasSortName;
- (void)setSortName:;
@end
