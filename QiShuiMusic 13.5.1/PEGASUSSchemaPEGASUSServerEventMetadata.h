@interface PEGASUSSchemaPEGASUSServerEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID pegasusId;
@property (nonatomic) BOOL hasPegasusId;
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
- (BOOL)hasPegasusId;
- (void)deletePegasusId;
- (id)pegasusId;
- (void)setPegasusId:;
- (void)setHasPegasusId:;
@end
