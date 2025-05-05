@interface INFERENCESchemaINFERENCEClientEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID inferenceId;
@property (nonatomic) BOOL hasInferenceId;
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
- (BOOL)hasInferenceId;
- (void)deleteInferenceId;
- (id)inferenceId;
- (void)setInferenceId:;
- (void)setHasInferenceId:;
@end
