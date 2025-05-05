@interface OPTINSchemaOPTINClientEvent : SISchemaTopLevelUnionType
@property (nonatomic) SISchemaInstrumentationMessage innerEvent;
@property (nonatomic) OPTINSchemaOPTINInconsistentStateDetected inconsistentStateDetected;
@property (nonatomic) BOOL hasInconsistentStateDetected;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q whichEvent_Type;
- (id)qualifiedMessageName;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (unsigned long long)whichEvent_Type;
- (id)innerEvent;
- (void)setInconsistentStateDetected:;
- (id)inconsistentStateDetected;
- (void)deleteInconsistentStateDetected;
- (BOOL)hasInconsistentStateDetected;
- (void)setHasInconsistentStateDetected:;
@end
