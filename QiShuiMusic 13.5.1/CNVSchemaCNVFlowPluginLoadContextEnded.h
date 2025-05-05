@interface CNVSchemaCNVFlowPluginLoadContextEnded : SISchemaInstrumentationMessage
@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (nonatomic) BOOL hasPluginCached;
@property (nonatomic) BOOL hasHasPluginCached;
@property (nonatomic) NSData jsonData;
- (BOOL)hasExists;
- (BOOL)exists;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (void)setExists:;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)deleteExists;
- (void)setHasExists:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasPluginCached:;
- (BOOL)hasHasPluginCached;
- (void)setHasHasPluginCached:;
- (void)deleteHasPluginCached;
- (BOOL)hasPluginCached;
@end
