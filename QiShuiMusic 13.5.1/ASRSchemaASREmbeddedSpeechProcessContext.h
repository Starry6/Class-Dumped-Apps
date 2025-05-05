@interface ASRSchemaASREmbeddedSpeechProcessContext : SISchemaInstrumentationMessage
@property (nonatomic) ASRSchemaASREmbeddedSpeechProcessStarted startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q whichContextevent;
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
- (void)setStartedOrChanged:;
- (id)startedOrChanged;
- (void)setHasStartedOrChanged:;
- (void)deleteStartedOrChanged;
- (unsigned long long)whichContextevent;
- (BOOL)hasStartedOrChanged;
@end
