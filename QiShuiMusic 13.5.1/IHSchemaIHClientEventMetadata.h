@interface IHSchemaIHClientEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID ihId;
@property (nonatomic) BOOL hasIhId;
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
- (BOOL)hasIhId;
- (void)deleteIhId;
- (id)ihId;
- (void)setIhId:;
- (void)setHasIhId:;
@end
