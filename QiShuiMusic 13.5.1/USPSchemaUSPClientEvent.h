@interface USPSchemaUSPClientEvent : SISchemaTopLevelUnionType
@property (nonatomic) SISchemaInstrumentationMessage innerEvent;
@property (nonatomic) USPSchemaUSPClientEventMetadata eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (nonatomic) USPSchemaUSPLoggingInitalized loggingInitialized;
@property (nonatomic) BOOL hasLoggingInitialized;
@property (nonatomic) USPSchemaUSPLoggingReported loggingReported;
@property (nonatomic) BOOL hasLoggingReported;
@property (nonatomic) USPSchemaUSPMeasureStarted measureStarted;
@property (nonatomic) BOOL hasMeasureStarted;
@property (nonatomic) USPSchemaUSPMeasureEnded measureEnded;
@property (nonatomic) BOOL hasMeasureEnded;
@property (nonatomic) USPSchemaUSPIterationStarted iterationStarted;
@property (nonatomic) BOOL hasIterationStarted;
@property (nonatomic) USPSchemaUSPIterationEnded iterationEnded;
@property (nonatomic) BOOL hasIterationEnded;
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
- (id)eventMetadata;
- (void)setEventMetadata:;
- (BOOL)hasEventMetadata;
- (id)innerEvent;
- (id)getComponentId;
- (void)deleteEventMetadata;
- (void)setHasEventMetadata:;
- (void)setLoggingInitialized:;
- (id)loggingInitialized;
- (void)deleteLoggingInitialized;
- (void)setLoggingReported:;
- (id)loggingReported;
- (void)deleteLoggingReported;
- (void)setMeasureStarted:;
- (id)measureStarted;
- (void)deleteMeasureStarted;
- (void)setMeasureEnded:;
- (id)measureEnded;
- (void)deleteMeasureEnded;
- (void)setIterationStarted:;
- (id)iterationStarted;
- (void)deleteIterationStarted;
- (void)setIterationEnded:;
- (id)iterationEnded;
- (void)deleteIterationEnded;
- (BOOL)hasLoggingInitialized;
- (void)setHasLoggingInitialized:;
- (BOOL)hasLoggingReported;
- (void)setHasLoggingReported:;
- (BOOL)hasMeasureStarted;
- (void)setHasMeasureStarted:;
- (BOOL)hasMeasureEnded;
- (void)setHasMeasureEnded:;
- (BOOL)hasIterationStarted;
- (void)setHasIterationStarted:;
- (BOOL)hasIterationEnded;
- (void)setHasIterationEnded:;
+ (int)joinability;
@end
