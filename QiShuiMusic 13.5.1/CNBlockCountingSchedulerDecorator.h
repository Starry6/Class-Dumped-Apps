@interface CNBlockCountingSchedulerDecorator : NSObject
@property (nonatomic) <CNScheduler> scheduler;
@property (nonatomic) Q pendingBlockCount;
@property (nonatomic) Q activeBlockCount;
@property (nonatomic) Q completedBlockCount;
@property (nonatomic) double timestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithScheduler:;
- (void)performBlock:qualityOfService:;
- (id)scheduler;
- (id)performCancelableBlock:qualityOfService:;
- (id)performCancelableBlock:;
- (id)afterDelay:performBlock:qualityOfService:;
- (void).cxx_destruct;
- (double)timestamp;
- (id)description;
- (id)afterDelay:performBlock:;
- (void)performBlock:;
- (void)blockBecamePending;
- (void)blockBecameActive;
- (void)blockBecameCompleted;
- (unsigned long long)pendingBlockCount;
- (unsigned long long)activeBlockCount;
- (unsigned long long)completedBlockCount;
+ (id)os_log;
@end
