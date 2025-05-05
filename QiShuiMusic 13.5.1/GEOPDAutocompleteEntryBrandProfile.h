@interface GEOPDAutocompleteEntryBrandProfile : PBCodable
@property (nonatomic) BOOL hasBrandId;
@property (nonatomic) NSString brandId;
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
- (BOOL)hasBrandId;
- (id)brandId;
- (void)setBrandId:;
+ (BOOL)isValid:;
@end
