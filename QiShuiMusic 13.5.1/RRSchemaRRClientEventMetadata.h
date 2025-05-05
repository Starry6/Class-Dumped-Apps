@interface RRSchemaRRClientEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID rrID;
@property (nonatomic) BOOL hasRrID;
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
- (BOOL)hasRrID;
- (void)deleteRrID;
- (id)rrID;
- (void)setRrID:;
- (void)setHasRrID:;
@end
