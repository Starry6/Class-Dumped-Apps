@interface GEOPDPlaceSummaryLayoutUnitCuratedGuides : PBCodable
@property (nonatomic) BOOL hasMinNumGuides;
@property (nonatomic) I minNumGuides;
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
- (unsigned int)minNumGuides;
- (void)setMinNumGuides:;
- (void)setHasMinNumGuides:;
- (BOOL)hasMinNumGuides;
+ (BOOL)isValid:;
@end
