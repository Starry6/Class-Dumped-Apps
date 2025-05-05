@interface CNSuspendableSchedulerDecorator : NSObject
@property (nonatomic) <CNScheduler> scheduler;
@property (nonatomic) CNQueue queue;
@property (nonatomic) NSConditionLock lock;
@property (nonatomic) double timestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithScheduler:;
- (void)performBlock:qualityOfService:;
- (id)scheduler;
- (void)suspend;
- (id)performCancelableBlock:qualityOfService:;
- (id)lock;
- (id)performCancelableBlock:;
- (void)resume;
- (id)_nts_enqueueCancelableBlock:qualityOfService:;
- (id)afterDelay:performBlock:qualityOfService:;
- (void).cxx_destruct;
- (double)timestamp;
- (id)description;
- (id)afterDelay:performBlock:;
- (void)performBlock:;
- (id)queue;
- (void)_performFirstQueuedTask;
+ (id)suspendedSchedulerWithScheduler:;
+ (id)resumedSchedulerWithScheduler:;
@end
