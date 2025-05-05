@interface SUTSchemaTestGeneratedTurnID : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID turnID;
@property (nonatomic) BOOL hasTurnID;
@property (nonatomic) NSData jsonData;
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
- (BOOL)hasTurnID;
- (id)turnID;
- (void)setTurnID:;
- (void)deleteTurnID;
- (void)setHasTurnID:;
@end
