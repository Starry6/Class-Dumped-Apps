@interface SMTSchemaSMTClientEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID smtId;
@property (nonatomic) BOOL hasSmtId;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasSmtId;
- (void)deleteSmtId;
- (id)smtId;
- (void)setSmtId:;
- (void)setHasSmtId:;
@end
