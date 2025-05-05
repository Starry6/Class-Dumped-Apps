@interface GEOWiFiQualityNetworkSearchResult : PBCodable
@property (nonatomic) NSMutableArray matches;
- (void)readAll:;
- (BOOL)hasGreenTeaWithValue:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (id)matches;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setMatches:;
- (id)copyWithZone:;
- (void)clearMatches;
- (void)addMatches:;
- (unsigned long long)matchesCount;
- (id)matchesAtIndex:;
+ (BOOL)isValid:;
+ (Class)matchesType;
@end
