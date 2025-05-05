@interface PLConcurrencyLimiter : NSObject
- (id)init;
- (id)sharedUtilityQueue;
- (void)dispatchAsync:block:;
- (void)_handleUnexpectedQoSClass:;
- (void)_syncPerformBlockNotOnAnyQueue:;
- (id)debugDescription;
- (void)asyncPerformOnContext:identifyingBlock:block:;
- (void)sync:identifyingBlock:library:;
- (void)async:identifyingBlock:library:;
- (id)_nextDispatchQueueForCurrentQoS;
- (id)callOutForCurrentQoS;
- (id)_queuesTrackingBlocks;
- (void).cxx_destruct;
- (id)sharedBackgroundQueue;
+ (void)configureListTrackingForDispatchQueue:;
+ (BOOL)isRunningUnderLimiter;
+ (id)sharedLimiter;
+ (void)reportBlockDequeuedOnQueue:;
+ (id)debugDescriptionOfEnqueuedBlocksOnQueue:;
+ (void)reportBlockEnqueued:onQueue:forLibrary:;
@end
