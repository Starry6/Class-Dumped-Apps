@interface CAMSchemaCAMResponseGenerated : SISchemaInstrumentationMessage
@property (nonatomic) CAMSchemaCAMResponse response;
@property (nonatomic) BOOL hasResponse;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (BOOL)hasResponse;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (id)response;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (void)setResponse:;
- (BOOL)isEqual:;
- (void)deleteResponse;
- (void)setHasResponse:;
@end
