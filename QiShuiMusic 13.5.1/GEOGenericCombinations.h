@interface GEOGenericCombinations : PBCodable
@property (nonatomic) NSMutableArray substitutes;
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
- (id)substitutes;
- (void)setSubstitutes:;
- (void)clearSubstitutes;
- (void)addSubstitutes:;
- (unsigned long long)substitutesCount;
- (id)substitutesAtIndex:;
+ (BOOL)isValid:;
+ (Class)substitutesType;
@end
