@interface PLUSSchemaPLUSInferencePluginStartedOrChanged : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger triggerReason;
@property (nonatomic) BOOL hasTriggerReason;
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
- (void)setTriggerReason:;
- (BOOL)hasTriggerReason;
- (void)setHasTriggerReason:;
- (void)deleteTriggerReason;
- (int)triggerReason;
@end
