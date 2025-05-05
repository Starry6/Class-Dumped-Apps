@interface CDASchemaCDAClientEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID cdaId;
@property (nonatomic) BOOL hasCdaId;
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
- (void)setCdaId:;
- (BOOL)hasCdaId;
- (void)deleteCdaId;
- (id)cdaId;
- (void)setHasCdaId:;
@end
