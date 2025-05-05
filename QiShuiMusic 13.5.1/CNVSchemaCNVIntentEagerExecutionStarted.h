@interface CNVSchemaCNVIntentEagerExecutionStarted : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger plugin;
@property (nonatomic) BOOL hasPlugin;
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
- (void)setPlugin:;
- (int)plugin;
- (BOOL)hasPlugin;
- (void)setHasPlugin:;
- (void)deletePlugin;
@end
