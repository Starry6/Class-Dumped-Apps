@interface CLPInstSchemaCLPClientEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID clpId;
@property (nonatomic) BOOL hasClpId;
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
- (BOOL)hasClpId;
- (void)deleteClpId;
- (id)clpId;
- (void)setClpId:;
- (void)setHasClpId:;
@end
