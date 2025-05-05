@interface RSSSchemaRSSSiriVocabSyncCompanionSyncPluginSyncRequested : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger syncData;
@property (nonatomic) BOOL hasSyncData;
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
- (void)setSyncData:;
- (BOOL)hasSyncData;
- (void)setHasSyncData:;
- (void)deleteSyncData;
- (int)syncData;
@end
