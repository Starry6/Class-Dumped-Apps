@interface NLXSchemaNLXCurareContext : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID curareId;
@property (nonatomic) BOOL hasCurareId;
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
- (BOOL)hasCurareId;
- (void)deleteCurareId;
- (id)curareId;
- (void)setCurareId:;
- (void)setHasCurareId:;
@end
