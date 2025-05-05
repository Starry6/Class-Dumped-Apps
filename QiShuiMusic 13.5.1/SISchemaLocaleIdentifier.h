@interface SISchemaLocaleIdentifier : SISchemaInstrumentationMessage
@property (nonatomic) NSString countryCode;
@property (nonatomic) BOOL hasCountryCode;
@property (nonatomic) NSString languageCode;
@property (nonatomic) BOOL hasLanguageCode;
@property (nonatomic) NSData jsonData;
- (BOOL)hasCountryCode;
- (void)setCountryCode:;
- (id)countryCode;
- (void)setLanguageCode:;
- (BOOL)hasLanguageCode;
- (id)languageCode;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasCountryCode:;
- (void)deleteCountryCode;
- (void)setHasLanguageCode:;
- (void)deleteLanguageCode;
@end
