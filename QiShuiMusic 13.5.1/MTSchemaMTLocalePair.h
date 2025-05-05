@interface MTSchemaMTLocalePair : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger sourceLocale;
@property (nonatomic) BOOL hasSourceLocale;
@property (nonatomic) NSInteger targetLocale;
@property (nonatomic) BOOL hasTargetLocale;
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
- (int)sourceLocale;
- (int)targetLocale;
- (void)setTargetLocale:;
- (BOOL)hasSourceLocale;
- (void)deleteSourceLocale;
- (void)setSourceLocale:;
- (void)setHasSourceLocale:;
- (BOOL)hasTargetLocale;
- (void)setHasTargetLocale:;
- (void)deleteTargetLocale;
@end
