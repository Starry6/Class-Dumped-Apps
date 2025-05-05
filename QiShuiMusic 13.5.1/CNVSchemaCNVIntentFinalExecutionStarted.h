@interface CNVSchemaCNVIntentFinalExecutionStarted : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger plugin;
@property (nonatomic) BOOL hasPlugin;
@property (nonatomic) I stackDepth;
@property (nonatomic) BOOL hasStackDepth;
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
- (void)setStackDepth:;
- (BOOL)hasStackDepth;
- (void)setHasStackDepth:;
- (void)deleteStackDepth;
- (unsigned int)stackDepth;
@end
