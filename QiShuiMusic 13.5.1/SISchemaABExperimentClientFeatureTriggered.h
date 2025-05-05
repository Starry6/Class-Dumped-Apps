@interface SISchemaABExperimentClientFeatureTriggered : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID turnId;
@property (nonatomic) BOOL hasTurnId;
@property (nonatomic) NSString experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) NSData jsonData;
- (id)experimentId;
- (void)setExperimentId:;
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
- (BOOL)hasExperimentId;
- (id)turnId;
- (void)setTurnId:;
- (void)deleteExperimentId;
- (void)setHasExperimentId:;
- (BOOL)hasTurnId;
- (void)deleteTurnId;
- (void)setHasTurnId:;
@end
