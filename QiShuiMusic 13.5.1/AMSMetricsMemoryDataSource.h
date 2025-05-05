@interface AMSMetricsMemoryDataSource : NSObject
@property (nonatomic) NSMutableDictionary batches;
- (void)didFinishBatching;
- (BOOL)willStartBatchingWithLogKey:error:;
- (void)cancel;
- (BOOL)skipEvents:error:;
- (void)enumerateSortedEventsForTopic:block:;
- (void).cxx_destruct;
- (BOOL)removeEvents:error:;
- (id)initWithEvents:;
- (id)batches;
- (void)setBatches:;
+ (id)batchesFromEvents:;
@end
