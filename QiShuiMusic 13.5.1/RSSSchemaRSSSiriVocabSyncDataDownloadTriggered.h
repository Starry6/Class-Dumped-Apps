@interface RSSSchemaRSSSiriVocabSyncDataDownloadTriggered : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger trigger;
@property (nonatomic) BOOL hasTrigger;
@property (nonatomic) NSInteger syncData;
@property (nonatomic) BOOL hasSyncData;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setTrigger:;
- (id)jsonData;
- (unsigned long long)hash;
- (int)trigger;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasTrigger:;
- (BOOL)hasTrigger;
- (void)deleteTrigger;
- (void)setSyncData:;
- (BOOL)hasSyncData;
- (void)setHasSyncData:;
- (void)deleteSyncData;
- (int)syncData;
@end
