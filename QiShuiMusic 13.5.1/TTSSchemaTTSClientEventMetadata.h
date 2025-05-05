@interface TTSSchemaTTSClientEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID ttsId;
@property (nonatomic) BOOL hasTtsId;
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
- (void)setTtsId:;
- (void)setRequestId:;
- (void)setHasRequestId:;
- (BOOL)hasRequestId;
- (void)deleteRequestId;
- (BOOL)hasTtsId;
- (void)deleteTtsId;
- (id)ttsId;
- (void)setHasTtsId:;
@end
