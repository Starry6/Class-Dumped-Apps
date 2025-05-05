@interface PLConcurrentQueue : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> targetQueue;
@property (nonatomic) q width;
- (id)init;
- (id)targetQueue;
- (void)dispatchAsync:;
- (long long)width;
- (void).cxx_destruct;
- (id)initWithTargetQueue:width:;
- (void)_internalQueue_tryDispatchingNextPendingBlock;
@end
