@interface GEOLPRPlateMatchCondition : PBCodable
@property (nonatomic) NSMutableArray patterns;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (id)patterns;
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
- (void)setPatterns:;
- (void)clearPatterns;
- (void)addPatterns:;
- (unsigned long long)patternsCount;
- (id)patternsAtIndex:;
+ (BOOL)isValid:;
+ (Class)patternsType;
@end
