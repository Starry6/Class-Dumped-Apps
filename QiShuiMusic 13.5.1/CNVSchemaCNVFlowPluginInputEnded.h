@interface CNVSchemaCNVFlowPluginInputEnded : SISchemaInstrumentationMessage
@property (nonatomic) BOOL hasTopicChanged;
@property (nonatomic) BOOL hasHasTopicChanged;
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
- (void)setHasTopicChanged:;
- (BOOL)hasHasTopicChanged;
- (void)setHasHasTopicChanged:;
- (void)deleteHasTopicChanged;
- (BOOL)hasTopicChanged;
@end
