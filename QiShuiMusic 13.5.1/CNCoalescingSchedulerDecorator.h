@interface CNCoalescingSchedulerDecorator : NSObject
@property (nonatomic) <CNScheduler> scheduler;
@property (nonatomic) double coalescingWindow;
@property (nonatomic) Q state;
@property (nonatomic) CNStack delayedBlocks;
@property (nonatomic) double timestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setState:;
- (void)performBlock:qualityOfService:;
- (id)scheduler;
- (id)performCancelableBlock:qualityOfService:;
- (id)performCancelableBlock:;
- (id)afterDelay:performBlock:qualityOfService:;
- (unsigned long long)state;
- (void).cxx_destruct;
- (double)timestamp;
- (id)afterDelay:performBlock:;
- (void)performBlock:;
- (id)initWithScheduler:coalescingWindow:;
- (unsigned long long)getAndIncrementState;
- (void)flushDelayedBlock;
- (void)removeDelayedBlock:;
- (double)coalescingWindow;
- (id)delayedBlocks;
- (void)setDelayedBlocks:;
@end
