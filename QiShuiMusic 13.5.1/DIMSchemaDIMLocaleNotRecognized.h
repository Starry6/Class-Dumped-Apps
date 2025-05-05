@interface DIMSchemaDIMLocaleNotRecognized : SISchemaInstrumentationMessage
@property (nonatomic) NSString unknownLocale;
@property (nonatomic) BOOL hasUnknownLocale;
@property (nonatomic) NSData jsonData;
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
- (BOOL)hasUnknownLocale;
- (void)deleteUnknownLocale;
- (id)unknownLocale;
- (void)setUnknownLocale:;
- (void)setHasUnknownLocale:;
@end
