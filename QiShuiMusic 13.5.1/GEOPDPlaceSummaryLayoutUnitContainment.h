@interface GEOPDPlaceSummaryLayoutUnitContainment : PBCodable
@property (nonatomic) BOOL hasContainmentType;
@property (nonatomic) NSInteger containmentType;
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
- (int)containmentType;
- (void)setContainmentType:;
- (void)setHasContainmentType:;
- (BOOL)hasContainmentType;
- (id)containmentTypeAsString:;
- (int)StringAsContainmentType:;
+ (BOOL)isValid:;
@end
