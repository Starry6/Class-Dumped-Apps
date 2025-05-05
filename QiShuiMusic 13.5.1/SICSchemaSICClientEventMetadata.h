@interface SICSchemaSICClientEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID sicId;
@property (nonatomic) BOOL hasSicId;
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
- (void)deleteRequestId;
- (BOOL)hasSicId;
- (void)deleteSicId;
- (id)sicId;
- (void)setSicId:;
- (void)setHasSicId:;
@end
