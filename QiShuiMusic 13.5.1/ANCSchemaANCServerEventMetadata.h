@interface ANCSchemaANCServerEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID ancId;
@property (nonatomic) BOOL hasAncId;
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
- (BOOL)hasAncId;
- (void)deleteAncId;
- (id)ancId;
- (void)setAncId:;
- (void)setHasAncId:;
@end
