@interface SIServiceServerUploadInfo : SISchemaInstrumentationMessage
@property (nonatomic) q ns_server_upload_ts;
@property (nonatomic) BOOL hasNs_server_upload_ts;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setNs_server_upload_ts:;
- (BOOL)hasNs_server_upload_ts;
- (void)setHasNs_server_upload_ts:;
- (void)deleteNs_server_upload_ts;
- (long long)ns_server_upload_ts;
@end
