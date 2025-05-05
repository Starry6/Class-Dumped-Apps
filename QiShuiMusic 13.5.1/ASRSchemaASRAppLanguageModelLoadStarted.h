@interface ASRSchemaASRAppLanguageModelLoadStarted : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger modelLocale;
@property (nonatomic) BOOL hasModelLocale;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setModelLocale:;
- (BOOL)hasModelLocale;
- (void)setHasModelLocale:;
- (void)deleteModelLocale;
- (int)modelLocale;
@end
