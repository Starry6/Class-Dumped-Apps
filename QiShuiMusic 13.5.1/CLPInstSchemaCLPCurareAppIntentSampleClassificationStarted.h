@interface CLPInstSchemaCLPCurareAppIntentSampleClassificationStarted : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID originalRequestId;
@property (nonatomic) BOOL hasOriginalRequestId;
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
- (BOOL)hasOriginalRequestId;
- (void)deleteOriginalRequestId;
- (id)originalRequestId;
- (void)setOriginalRequestId:;
- (void)setHasOriginalRequestId:;
@end
