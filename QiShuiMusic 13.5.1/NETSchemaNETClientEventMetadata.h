@interface NETSchemaNETClientEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID netId;
@property (nonatomic) BOOL hasNetId;
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
- (BOOL)hasNetId;
- (void)deleteNetId;
- (id)netId;
- (void)setNetId:;
- (void)setHasNetId:;
@end
