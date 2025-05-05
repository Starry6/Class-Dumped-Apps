@interface RFSchemaRFGVisualResponseShownLink : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID turnId;
@property (nonatomic) BOOL hasTurnId;
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
- (id)turnId;
- (void)setTurnId:;
- (BOOL)hasTurnId;
- (void)deleteTurnId;
- (void)setHasTurnId:;
@end
