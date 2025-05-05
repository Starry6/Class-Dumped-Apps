@interface SUGSchemaSUGClientEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID sugId;
@property (nonatomic) BOOL hasSugId;
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
- (BOOL)hasSugId;
- (void)deleteSugId;
- (id)sugId;
- (void)setSugId:;
- (void)setHasSugId:;
@end
