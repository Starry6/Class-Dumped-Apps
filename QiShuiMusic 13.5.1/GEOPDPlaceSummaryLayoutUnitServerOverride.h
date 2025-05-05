@interface GEOPDPlaceSummaryLayoutUnitServerOverride : PBCodable
@property (nonatomic) BOOL hasServerOverrideIdentifier;
@property (nonatomic) I serverOverrideIdentifier;
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
- (unsigned int)serverOverrideIdentifier;
- (void)setServerOverrideIdentifier:;
- (void)setHasServerOverrideIdentifier:;
- (BOOL)hasServerOverrideIdentifier;
+ (BOOL)isValid:;
@end
