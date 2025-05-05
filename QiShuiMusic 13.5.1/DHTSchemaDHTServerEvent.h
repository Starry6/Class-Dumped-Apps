@interface DHTSchemaDHTServerEvent : SISchemaTopLevelUnionType
@property (nonatomic) SISchemaInstrumentationMessage innerEvent;
@property (nonatomic) DHTSchemaDHTDeleteTrigger deleteTrigger;
@property (nonatomic) BOOL hasDeleteTrigger;
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
- (id)deleteTrigger;
- (void)setDeleteTrigger:;
- (void)deleteDeleteTrigger;
- (BOOL)hasDeleteTrigger;
- (void)setHasDeleteTrigger:;
@end
