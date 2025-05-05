@interface NLXSchemaCDMSystemOffered : SISchemaInstrumentationMessage
@property (nonatomic) NLXSchemaCDMUserDialogAct offeredAct;
@property (nonatomic) BOOL hasOfferedAct;
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
- (BOOL)hasOfferedAct;
- (void)deleteOfferedAct;
- (id)offeredAct;
- (void)setOfferedAct:;
- (void)setHasOfferedAct:;
@end
