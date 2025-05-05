@interface POMMESSchemaPOMMESPegasusRequestKfedLatency : SISchemaInstrumentationMessage
@property (nonatomic) I overallLatencyInMs;
@property (nonatomic) BOOL hasOverallLatencyInMs;
@property (nonatomic) I banyanLatencyInMs;
@property (nonatomic) BOOL hasBanyanLatencyInMs;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (unsigned int)overallLatencyInMs;
- (void)setOverallLatencyInMs:;
- (void)setHasOverallLatencyInMs:;
- (BOOL)hasOverallLatencyInMs;
- (void)deleteOverallLatencyInMs;
- (void)setBanyanLatencyInMs:;
- (BOOL)hasBanyanLatencyInMs;
- (void)setHasBanyanLatencyInMs:;
- (void)deleteBanyanLatencyInMs;
- (unsigned int)banyanLatencyInMs;
@end
