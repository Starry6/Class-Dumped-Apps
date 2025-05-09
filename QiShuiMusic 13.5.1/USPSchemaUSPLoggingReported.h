@interface USPSchemaUSPLoggingReported : SISchemaInstrumentationMessage
@property (nonatomic) NSArray metrics;
@property (nonatomic) NSArray sessionInfoItems;
@property (nonatomic) NSData jsonData;
- (void)setMetrics:;
- (id)initWithJSON:;
- (id)metrics;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)clearMetrics;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (unsigned long long)metricsCount;
- (void)addMetrics:;
- (void)deleteMetrics;
- (void)clearSessionInfoItems;
- (void)deleteSessionInfoItems;
- (void)addSessionInfoItems:;
- (unsigned long long)sessionInfoItemsCount;
- (id)sessionInfoItemsAtIndex:;
- (id)sessionInfoItems;
- (void)setSessionInfoItems:;
- (id)metricsAtIndex:;
@end
