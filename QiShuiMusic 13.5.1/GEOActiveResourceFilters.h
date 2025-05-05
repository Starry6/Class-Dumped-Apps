@interface GEOActiveResourceFilters : PBCodable
@property (nonatomic) Q filtersCount;
@property (nonatomic) ^{GEOActiveResourceFilter=dii{?=b1b1b1}} filters;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)filters;
- (id)unknownFields;
- (void)dealloc;
- (id)initWithJSON:;
- (unsigned long long)filtersCount;
- (id)jsonRepresentation;
- (void)addFilter:;
- (void)clearFilters;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setFilters:count:;
- (id)filterAtIndex:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
