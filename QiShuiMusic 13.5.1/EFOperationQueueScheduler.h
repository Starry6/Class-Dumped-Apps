@interface EFOperationQueueScheduler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)performWithObject:;
- (void)performVoucherPreservingBlock:;
- (id)performCancelableBlock:;
- (void).cxx_destruct;
- (id)initWithMaxConcurrentOperationCount:;
- (id)afterDelay:performBlock:;
- (void)performBlock:;
- (void)performSyncBlock:;
- (void)performSyncBarrierBlock:;
@end
