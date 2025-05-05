@interface CNTimeProfilingSchedulerDecorator : NSObject
@property (nonatomic) Q blockCounter;
@property (nonatomic) <CNScheduler> scheduler;
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
- (unsigned long long)nextBlockNumber;
- (unsigned long long)blockCounter;
+ (id)os_log;
@end
