@interface SISchemaISOLocale : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger languageCode;
@property (nonatomic) BOOL hasLanguageCode;
@property (nonatomic) NSInteger countryCode;
@property (nonatomic) BOOL hasCountryCode;
@property (nonatomic) NSData jsonData;
- (BOOL)hasCountryCode;
- (void)setCountryCode:;
- (int)countryCode;
- (void)setLanguageCode:;
- (BOOL)hasLanguageCode;
- (int)languageCode;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasCountryCode:;
- (void)deleteCountryCode;
- (void)setHasLanguageCode:;
- (void)deleteLanguageCode;
@end
