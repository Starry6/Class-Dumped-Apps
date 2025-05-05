@interface RSSSchemaRSSSiriVocabSyncDataUpdatedNotificationReceived : SISchemaInstrumentationMessage
@property (nonatomic) Q syncDataUpdateNotificationLatencyInMs;
@property (nonatomic) BOOL hasSyncDataUpdateNotificationLatencyInMs;
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
- (void)setSyncDataUpdateNotificationLatencyInMs:;
- (BOOL)hasSyncDataUpdateNotificationLatencyInMs;
- (void)setHasSyncDataUpdateNotificationLatencyInMs:;
- (void)deleteSyncDataUpdateNotificationLatencyInMs;
- (unsigned long long)syncDataUpdateNotificationLatencyInMs;
@end
