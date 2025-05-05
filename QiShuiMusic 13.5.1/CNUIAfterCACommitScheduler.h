@interface CNUIAfterCACommitScheduler : NSObject
@property (nonatomic) CNSuspendableSchedulerDecorator scheduler;
@property (nonatomic) ^{__CFRunLoopObserver=} runLoopObserver;
@property (nonatomic) double timestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)performBlock:qualityOfService:;
- (id)scheduler;
- (id)performCancelableBlock:qualityOfService:;
- (id)performCancelableBlock:;
- (id)afterDelay:performBlock:qualityOfService:;
- (id)initWithSchedulerProvider:;
- (void).cxx_destruct;
- (double)timestamp;
- (id)afterDelay:performBlock:;
- (void)performBlock:;
- (id)runLoopObserver;
@end
