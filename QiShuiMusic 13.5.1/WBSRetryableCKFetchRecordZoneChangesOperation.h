@interface WBSRetryableCKFetchRecordZoneChangesOperation : WBSRetryableCKDatabaseOperation
@property (nonatomic) NSArray recordZoneIDs;
@property (nonatomic) NSDictionary configurationsByRecordZoneID;
@property (nonatomic) BOOL fetchAllChanges;
@property (nonatomic) @? recordWasChangedBlock;
@property (nonatomic) @? recordWithIDWasDeletedBlock;
@property (nonatomic) @? recordZoneChangeTokensUpdatedBlock;
@property (nonatomic) @? recordZoneFetchCompletionBlock;
@property (nonatomic) @? fetchRecordZoneChangesCompletionBlock;
- (void)_setUpOperation:;
- (id)configurationsByRecordZoneID;
- (void)setRecordZoneChangeTokensUpdatedBlock:;
- (id)_makeOperation;
- (void)setRecordZoneIDs:;
- (void)setConfigurationsByRecordZoneID:;
- (void)setFetchAllChanges:;
- (BOOL)fetchAllChanges;
- (id)recordZoneIDs;
- (void)setRecordWithIDWasDeletedBlock:;
- (id)recordWithIDWasDeletedBlock;
- (id)recordZoneChangeTokensUpdatedBlock;
- (void)setRecordWasChangedBlock:;
- (void)setRecordZoneFetchCompletionBlock:;
- (void)setFetchRecordZoneChangesCompletionBlock:;
- (id)recordZoneFetchCompletionBlock;
- (void).cxx_destruct;
- (id)fetchRecordZoneChangesCompletionBlock;
- (id)recordWasChangedBlock;
@end
