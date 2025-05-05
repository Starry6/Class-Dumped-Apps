@interface EXPSearchSchemaEXPSearchClientEvent : SISchemaTopLevelUnionType
@property (nonatomic) SISchemaInstrumentationMessage innerEvent;
@property (nonatomic) EXPSearchSchemaEXPSearchSessionExperiments sessionExperiments;
@property (nonatomic) BOOL hasSessionExperiments;
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
- (void)setSessionExperiments:;
- (id)sessionExperiments;
- (void)deleteSessionExperiments;
- (BOOL)hasSessionExperiments;
- (void)setHasSessionExperiments:;
@end
