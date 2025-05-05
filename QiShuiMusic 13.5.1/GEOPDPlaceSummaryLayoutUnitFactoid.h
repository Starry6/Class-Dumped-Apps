@interface GEOPDPlaceSummaryLayoutUnitFactoid : PBCodable
@property (nonatomic) BOOL hasFactoidIndex;
@property (nonatomic) I factoidIndex;
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
- (unsigned int)factoidIndex;
- (void)setFactoidIndex:;
- (void)setHasFactoidIndex:;
- (BOOL)hasFactoidIndex;
+ (BOOL)isValid:;
@end
