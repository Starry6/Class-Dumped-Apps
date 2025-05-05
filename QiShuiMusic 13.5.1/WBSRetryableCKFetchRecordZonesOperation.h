@interface WBSRetryableCKFetchRecordZonesOperation : WBSRetryableCKDatabaseOperation
@property (nonatomic) NSArray recordZoneIDs;
@property (nonatomic) @? perRecordZoneCompletionBlock;
@property (nonatomic) @? fetchRecordZonesCompletionBlock;
- (void)_setUpOperation:;
- (id)_makeOperation;
- (void)setRecordZoneIDs:;
- (id)fetchRecordZonesCompletionBlock;
- (id)recordZoneIDs;
- (void)setFetchRecordZonesCompletionBlock:;
- (void).cxx_destruct;
- (id)perRecordZoneCompletionBlock;
- (void)setPerRecordZoneCompletionBlock:;
@end
