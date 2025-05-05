@interface GEODisplayString : PBCodable
@property (nonatomic) NSMutableArray localizedStrings;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (void)addLocalizedStrings:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (void)setLocalizedStrings:;
- (id)localizedStrings;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)localizedStringsAtIndex:;
- (void).cxx_destruct;
- (void)clearLocalizedStrings;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)localizedStringsCount;
+ (BOOL)isValid:;
+ (Class)localizedStringsType;
@end
