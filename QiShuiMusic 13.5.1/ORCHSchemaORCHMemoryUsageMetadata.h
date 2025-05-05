@interface ORCHSchemaORCHMemoryUsageMetadata : SISchemaInstrumentationMessage
@property (nonatomic) Q maxRSS;
@property (nonatomic) BOOL hasMaxRSS;
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
- (void)setMaxRSS:;
- (BOOL)hasMaxRSS;
- (void)setHasMaxRSS:;
- (void)deleteMaxRSS;
- (unsigned long long)maxRSS;
@end
