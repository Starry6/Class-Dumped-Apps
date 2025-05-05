@interface CNVSchemaCNVFlowPluginLoadContextFailed : SISchemaInstrumentationMessage
@property (nonatomic) I errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasPluginCached;
@property (nonatomic) BOOL hasHasPluginCached;
@property (nonatomic) NSData jsonData;
- (BOOL)hasErrorCode;
- (unsigned int)errorCode;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setHasErrorCode:;
- (void)setErrorCode:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteErrorCode;
- (void)setHasPluginCached:;
- (BOOL)hasHasPluginCached;
- (void)setHasHasPluginCached:;
- (void)deleteHasPluginCached;
- (BOOL)hasPluginCached;
@end
