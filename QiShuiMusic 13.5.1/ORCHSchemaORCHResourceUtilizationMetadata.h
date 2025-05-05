@interface ORCHSchemaORCHResourceUtilizationMetadata : SISchemaInstrumentationMessage
@property (nonatomic) ORCHSchemaORCHMemoryUsageMetadata memoryUsageMetadata;
@property (nonatomic) BOOL hasMemoryUsageMetadata;
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
- (BOOL)hasMemoryUsageMetadata;
- (void)deleteMemoryUsageMetadata;
- (id)memoryUsageMetadata;
- (void)setMemoryUsageMetadata:;
- (void)setHasMemoryUsageMetadata:;
@end
