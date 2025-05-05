@interface EFStoppableScheduler : NSObject
@property (nonatomic) <EFScheduler> scheduler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)_cancelAllTokens;
- (id)performWithObject:;
- (id)initWithScheduler:;
- (void)performVoucherPreservingBlock:;
- (id)scheduler;
- (void)suspend;
- (void)assertIsExecuting:;
- (void)_addCancelationToken:;
- (id)performCancelableBlock:;
- (void)resume;
- (void)_removeCancelationToken:;
- (void).cxx_destruct;
- (void)stopAndWait;
- (id)afterDelay:performBlock:;
- (void)performBlock:;
- (void)performSyncBlock:;
- (void)performSyncBarrierBlock:;
+ (id)assertableSchedulerWithScheduler:;
+ (id)suspendableSchedulerWithScheduler:;
@end
