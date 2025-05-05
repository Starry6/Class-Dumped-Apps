@interface SADSchemaSADUODAssetsPrepared : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger locale;
@property (nonatomic) BOOL hasLocale;
@property (nonatomic) I elapsedSeconds;
@property (nonatomic) BOOL hasElapsedSeconds;
@property (nonatomic) NSData jsonData;
- (void)setLocale:;
- (BOOL)hasLocale;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (int)locale;
- (id)jsonData;
- (unsigned long long)hash;
- (unsigned int)elapsedSeconds;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteLocale;
- (void)setHasLocale:;
- (void)setElapsedSeconds:;
- (BOOL)hasElapsedSeconds;
- (void)setHasElapsedSeconds:;
- (void)deleteElapsedSeconds;
@end
