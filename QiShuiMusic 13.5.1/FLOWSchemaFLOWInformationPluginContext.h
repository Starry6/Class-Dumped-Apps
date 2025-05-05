@interface FLOWSchemaFLOWInformationPluginContext : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger eventType;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) NSString executedPegasusDomain;
@property (nonatomic) BOOL hasExecutedPegasusDomain;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (int)eventType;
- (void)setEventType:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setHasEventType:;
- (void).cxx_destruct;
- (BOOL)hasEventType;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteEventType;
- (BOOL)hasExecutedPegasusDomain;
- (void)deleteExecutedPegasusDomain;
- (id)executedPegasusDomain;
- (void)setExecutedPegasusDomain:;
- (void)setHasExecutedPegasusDomain:;
@end
