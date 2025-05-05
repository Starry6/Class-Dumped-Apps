@interface SISchemaClientFlow : SISchemaInstrumentationMessage
@property (nonatomic) NSString clientFlowPayload;
@property (nonatomic) BOOL hasClientFlowPayload;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasClientFlowPayload;
- (void)deleteClientFlowPayload;
- (id)clientFlowPayload;
- (void)setClientFlowPayload:;
- (void)setHasClientFlowPayload:;
@end
