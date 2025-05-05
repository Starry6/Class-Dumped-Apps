@interface PLCloudPhotoLibraryBatchManager : NSObject
- (id)init;
- (void)dealloc;
- (id)drainBatches;
- (void)addRecord:;
- (void)addRecord:ignoreBatchSize:;
- (long long)currentBatchCount;
- (void).cxx_destruct;
- (void)reset;
- (id)description;
- (BOOL)isAboveMaximumResourceBudget;
@end
