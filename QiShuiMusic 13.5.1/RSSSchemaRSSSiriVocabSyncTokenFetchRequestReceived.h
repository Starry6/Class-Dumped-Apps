@interface RSSSchemaRSSSiriVocabSyncTokenFetchRequestReceived : SISchemaInstrumentationMessage
@property (nonatomic) Q syncTokenFetchRequestTransferLatencyInMs;
@property (nonatomic) BOOL hasSyncTokenFetchRequestTransferLatencyInMs;
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
- (void)setSyncTokenFetchRequestTransferLatencyInMs:;
- (BOOL)hasSyncTokenFetchRequestTransferLatencyInMs;
- (void)setHasSyncTokenFetchRequestTransferLatencyInMs:;
- (void)deleteSyncTokenFetchRequestTransferLatencyInMs;
- (unsigned long long)syncTokenFetchRequestTransferLatencyInMs;
@end
