@interface NLXSchemaCDMUserRejected : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID offerId;
@property (nonatomic) BOOL hasOfferId;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (id)offerId;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (void)setOfferId:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasOfferId;
- (void)deleteOfferId;
- (void)setHasOfferId:;
@end
