@interface CUTDeferredTaskQueue : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) @? originalBlock;
@property (nonatomic) NSMutableArray pendingDispatchBlocks;
@property (nonatomic) NSNumber capacity;
- (id)capacity;
- (id)initWithQueue:block:;
- (id)pendingDispatchBlocks;
- (id)originalBlock;
- (id)initWithCapacity:queue:block:;
- (void).cxx_destruct;
- (void)enqueueExecutionWithTarget:afterDelay:;
- (void)cancelPendingExecutions;
- (id)queue;
- (id)initWithNumberCapacity:queue:block:;
@end
