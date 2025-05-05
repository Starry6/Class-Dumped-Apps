@interface SRSTSchemaSRSTClientEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID sessionId;
@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) SISchemaUUID srstId;
@property (nonatomic) BOOL hasSrstId;
@property (nonatomic) NSData jsonData;
- (void)setSessionId:;
- (void)setHasSessionId:;
- (id)sessionId;
- (BOOL)hasSessionId;
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
- (void)deleteSessionId;
- (BOOL)hasSrstId;
- (void)deleteSrstId;
- (id)srstId;
- (void)setSrstId:;
- (void)setHasSrstId:;
@end
