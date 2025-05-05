@interface AMSMetricsDatabaseDataSource : NSObject
@property (nonatomic) AMSMetricsDatabase database;
@property (nonatomic) NSString currentLockKey;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSString containerIdentifier;
@property (nonatomic) q eventCount;
- (void)didFinishBatching;
- (BOOL)willStartBatchingWithLogKey:error:;
- (id)containerIdentifier;
- (void)cancel;
- (id)enqueueEvents:;
- (long long)eventCount;
- (void)dealloc;
- (void)setCurrentLockKey:;
- (BOOL)skipEvents:error:;
- (void)enumerateSortedEventsForTopic:block:;
- (id)currentLockKey;
- (id)initWithContainerIdentifier:;
- (void).cxx_destruct;
- (void)removeAllEvents;
- (BOOL)removeEvents:error:;
- (void)setQueue:;
- (id)database;
- (id)queue;
@end
