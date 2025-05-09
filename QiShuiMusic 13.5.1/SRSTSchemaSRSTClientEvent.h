@interface SRSTSchemaSRSTClientEvent : SISchemaTopLevelUnionType
@property (nonatomic) SISchemaInstrumentationMessage innerEvent;
@property (nonatomic) SRSTSchemaSRSTClientEventMetadata eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (nonatomic) SRSTSchemaSRSTStateTransitionEvent stateTransitionEvent;
@property (nonatomic) BOOL hasStateTransitionEvent;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q whichEvent_Type;
- (int)componentName;
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
- (id)eventMetadata;
- (void)setEventMetadata:;
- (BOOL)hasEventMetadata;
- (id)innerEvent;
- (id)getComponentId;
- (void)deleteEventMetadata;
- (void)setHasEventMetadata:;
- (void)setStateTransitionEvent:;
- (id)stateTransitionEvent;
- (void)deleteStateTransitionEvent;
- (BOOL)hasStateTransitionEvent;
- (void)setHasStateTransitionEvent:;
+ (int)joinability;
@end
