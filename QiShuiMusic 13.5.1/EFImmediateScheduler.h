@interface EFImmediateScheduler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)performWithObject:;
- (void)performVoucherPreservingBlock:;
- (id)performCancelableBlock:;
- (id)afterDelay:performBlock:;
- (void)performBlock:;
- (void)performSyncBlock:;
- (void)performSyncBarrierBlock:;
@end
