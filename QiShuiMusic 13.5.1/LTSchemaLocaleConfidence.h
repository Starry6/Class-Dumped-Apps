@interface LTSchemaLocaleConfidence : SISchemaInstrumentationMessage
@property (nonatomic) NSString locale;
@property (nonatomic) BOOL hasLocale;
@property (nonatomic) I confidence;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) NSData jsonData;
- (unsigned int)confidence;
- (void)setLocale:;
- (void)setConfidence:;
- (BOOL)hasLocale;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)locale;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasConfidence:;
- (BOOL)hasConfidence;
- (void)deleteConfidence;
- (void)deleteLocale;
- (void)setHasLocale:;
@end
