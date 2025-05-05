@interface CDASchemaCDADeviceStateActivityStarted : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger state;
@property (nonatomic) BOOL hasState;
@property (nonatomic) NSInteger trigger;
@property (nonatomic) BOOL hasTrigger;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (void)setState:;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setTrigger:;
- (id)jsonData;
- (unsigned long long)hash;
- (int)trigger;
- (int)state;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasState;
- (void)setHasTrigger:;
- (BOOL)hasTrigger;
- (void)setHasState:;
- (void)deleteState;
- (void)deleteTrigger;
@end
