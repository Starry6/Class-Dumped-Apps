@interface AMSMetricsIdentifierCloudDataSource : NSObject
@property (nonatomic) <AMSMetricsIdentifierCloudDataSourceDelegate> delegate;
- (void)setDelegate:;
- (void)saveRecord:isServerRecord:;
- (id)_createRecordForIdentifier:;
- (void)removeRecordWithIdentifier:;
- (void)fetchModifiedRecordsWithCompletion:;
- (id)delegate;
- (void).cxx_destruct;
- (id)_parseRecord:error:;
- (id)_createRecordForIdentifierStore:;
+ (id)_database;
+ (id)_sharedQueue;
+ (void)cleanupIdentifiers;
+ (void)clearSyncState;
+ (void)removeAllRecords;
@end
