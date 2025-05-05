@interface CDASchemaCDAElectionTimerEnded : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger state;
@property (nonatomic) BOOL hasState;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (void)setState:;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (int)state;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasState;
- (void)setHasState:;
- (void)deleteState;
@end
