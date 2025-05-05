@interface WBSRetryableCKFetchRecordsOperation : WBSRetryableCKDatabaseOperation
@property (nonatomic) NSArray recordIDs;
@property (nonatomic) NSArray desiredKeys;
@property (nonatomic) @? perRecordProgressBlock;
@property (nonatomic) @? perRecordCompletionBlock;
@property (nonatomic) @? fetchRecordsCompletionBlock;
- (void)setPerRecordCompletionBlock:;
- (void)_setUpOperation:;
- (id)perRecordProgressBlock;
- (id)fetchRecordsCompletionBlock;
- (void)setRecordIDs:;
- (void)setDesiredKeys:;
- (void)setPerRecordProgressBlock:;
- (id)_makeOperation;
- (id)recordIDs;
- (void)setFetchRecordsCompletionBlock:;
- (id)desiredKeys;
- (id)perRecordCompletionBlock;
- (void).cxx_destruct;
@end
