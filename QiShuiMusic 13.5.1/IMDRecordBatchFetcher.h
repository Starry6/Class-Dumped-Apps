@interface IMDRecordBatchFetcher : NSObject
@property (nonatomic) q lastRowID;
@property (nonatomic) Q batchSize;
@property (nonatomic) NSPredicate predicate;
- (id)init;
- (void)dealloc;
- (unsigned long long)batchSize;
- (void)setBatchSize:;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)nextBatch;
- (id)predicate;
- (void)setPredicate:;
- (void).cxx_destruct;
- (id)nextBatchWithSize:;
- (long long)lastRowID;
- (void)setLastRowID:;
@end
