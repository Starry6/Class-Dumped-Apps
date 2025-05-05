@interface GEOPDMerchantLookupResult : PBCodable
@property (nonatomic) BOOL hasCategoryInfo;
@property (nonatomic) GEOPDCategoryInformation categoryInfo;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
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
- (BOOL)hasCategoryInfo;
- (id)categoryInfo;
- (void)setCategoryInfo:;
+ (BOOL)isValid:;
@end
