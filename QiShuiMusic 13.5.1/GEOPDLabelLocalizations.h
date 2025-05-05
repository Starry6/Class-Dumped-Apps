@interface GEOPDLabelLocalizations : PBCodable
@property (nonatomic) NSMutableArray localizedStrings;
- (void)readAll:;
- (id)bestLocalizedName;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setLocalizedStrings:;
- (id)localizedStrings;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (void)clearLocalizedStrings;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)localizedStringsCount;
- (void)addLocalizedString:;
- (id)localizedStringAtIndex:;
+ (BOOL)isValid:;
+ (Class)localizedStringType;
@end
