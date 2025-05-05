@interface GEOAutoCompleteResultInfo : PBCodable
@property (nonatomic) BOOL hasSuggestionsAcType;
@property (nonatomic) NSInteger suggestionsAcType;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (int)suggestionsAcType;
- (void)setSuggestionsAcType:;
- (void)setHasSuggestionsAcType:;
- (BOOL)hasSuggestionsAcType;
- (id)suggestionsAcTypeAsString:;
- (int)StringAsSuggestionsAcType:;
+ (BOOL)isValid:;
@end
