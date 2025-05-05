@interface SISchemaConversationTrace : SISchemaInstrumentationMessage
@property (nonatomic) NSData previousTurnID;
@property (nonatomic) BOOL hasPreviousTurnID;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setPreviousTurnID:;
- (BOOL)hasPreviousTurnID;
- (void)deletePreviousTurnID;
- (id)previousTurnID;
- (void)setHasPreviousTurnID:;
@end
