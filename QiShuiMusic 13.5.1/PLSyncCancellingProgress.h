@interface PLSyncCancellingProgress : NSProgress
@property (nonatomic) @? pl_cancellationHandler;
- (void)cancel;
- (void)setCancellationHandler:;
- (void).cxx_destruct;
- (id)pl_cancellationHandler;
- (void)setPl_cancellationHandler:;
+ (id)discreteProgressWithTotalUnitCount:;
@end
