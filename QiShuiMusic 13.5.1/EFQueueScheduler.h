@interface EFQueueScheduler : NSObject
@property (nonatomic) BOOL prefersImmediateExecution;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)performWithObject:;
- (void)performVoucherPreservingBlock:;
- (void)suspend;
- (void)assertIsExecuting:;
- (id)performCancelableBlock:;
- (void)resume;
- (void).cxx_destruct;
- (BOOL)prefersImmediateExecution;
- (id)initWithQueue:;
- (id)afterDelay:performBlock:;
- (void)performBlock:;
- (void)performSyncBlock:;
- (void)performSyncBarrierBlock:;
@end
