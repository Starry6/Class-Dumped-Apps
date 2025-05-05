@interface IDSTransactionLogSyncTask : IDSTransactionLogTask
@property (nonatomic) @? batchProcessingBlock;
@property (nonatomic) @? knownRecordIDsFromList;
@property (nonatomic) BOOL shouldContinueFromLastSyncPoint;
- (void).cxx_destruct;
- (id)batchProcessingBlock;
- (void)setBatchProcessingBlock:;
- (id)knownRecordIDsFromList;
- (void)setKnownRecordIDsFromList:;
- (BOOL)shouldContinueFromLastSyncPoint;
- (void)setShouldContinueFromLastSyncPoint:;
@end
