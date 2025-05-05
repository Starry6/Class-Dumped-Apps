@interface FLOWLINKSchemaFLOWLINKActionExecutionEnded : SISchemaInstrumentationMessage
@property (nonatomic) BOOL hasOutputToPresent;
@property (nonatomic) BOOL hasHasOutputToPresent;
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
- (void)setHasOutputToPresent:;
- (BOOL)hasHasOutputToPresent;
- (void)setHasHasOutputToPresent:;
- (void)deleteHasOutputToPresent;
- (BOOL)hasOutputToPresent;
@end
