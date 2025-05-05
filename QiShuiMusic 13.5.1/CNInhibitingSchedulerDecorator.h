@interface CNInhibitingSchedulerDecorator : NSObject
@property (nonatomic) <CNScheduler> scheduler;
@property (nonatomic) @? inhibitorFactory;
@property (nonatomic) double timestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)performBlock:qualityOfService:;
- (id)scheduler;
- (id)performCancelableBlock:qualityOfService:;
- (id)performCancelableBlock:;
- (id)afterDelay:performBlock:qualityOfService:;
- (void).cxx_destruct;
- (double)timestamp;
- (id)afterDelay:performBlock:;
- (void)performBlock:;
- (id)initWithScheduler:inhibitorFactory:;
- (id)inhibitorFactory;
@end
