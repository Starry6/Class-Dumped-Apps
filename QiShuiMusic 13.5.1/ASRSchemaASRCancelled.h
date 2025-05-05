@interface ASRSchemaASRCancelled : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger reason;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) ASRSchemaASRRecognitionMetrics metrics;
@property (nonatomic) BOOL hasMetrics;
@property (nonatomic) NSData jsonData;
- (void)setMetrics:;
- (id)initWithJSON:;
- (id)metrics;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (int)reason;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setReason:;
- (BOOL)hasReason;
- (void)setHasReason:;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasMetrics;
- (void)deleteReason;
- (void)deleteMetrics;
- (void)setHasMetrics:;
@end
