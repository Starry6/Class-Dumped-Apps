@interface GEOWalletCategoryStylingMap : PBCodable
@property (nonatomic) NSMutableArray mappings;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (id)mappings;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setMappings:;
- (void)clearMappings;
- (void)addMappings:;
- (unsigned long long)mappingsCount;
- (id)mappingsAtIndex:;
+ (BOOL)isValid:;
+ (Class)mappingsType;
@end
