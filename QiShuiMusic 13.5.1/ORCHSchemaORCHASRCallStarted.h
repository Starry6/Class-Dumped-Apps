@interface ORCHSchemaORCHASRCallStarted : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger taskType;
@property (nonatomic) BOOL hasTaskType;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (int)taskType;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setTaskType:;
- (BOOL)hasTaskType;
- (void)setHasTaskType:;
- (void)deleteTaskType;
@end
