@interface ANCSchemaANCClientEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID ancId;
@property (nonatomic) BOOL hasAncId;
@property (nonatomic) SISchemaUUID requestId;
@property (nonatomic) BOOL hasRequestId;
@property (nonatomic) NSData jsonData;
- (id)requestId;
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
- (void)setRequestId:;
- (void)setHasRequestId:;
- (BOOL)hasRequestId;
- (BOOL)hasAncId;
- (void)deleteAncId;
- (void)deleteRequestId;
- (id)ancId;
- (void)setAncId:;
- (void)setHasAncId:;
@end
