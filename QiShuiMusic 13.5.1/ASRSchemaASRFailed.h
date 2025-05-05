@interface ASRSchemaASRFailed : SISchemaInstrumentationMessage
@property (nonatomic) ASRSchemaASRRecognitionMetrics metrics;
@property (nonatomic) BOOL hasMetrics;
@property (nonatomic) NSData jsonData;
- (void)setMetrics:;
- (id)initWithJSON:;
- (id)metrics;
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
- (BOOL)hasMetrics;
- (void)deleteMetrics;
- (void)setHasMetrics:;
@end
