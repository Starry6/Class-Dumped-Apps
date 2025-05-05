@interface EFLazyFuture : EFFuture
- (BOOL)tryCancel;
- (void)onScheduler:addSuccessBlock:;
- (id)resultIfAvailable:;
- (BOOL)isCancelled;
- (void)setDelegate:;
- (BOOL)run;
- (void)addFailureBlock:;
- (BOOL)isFinished;
- (void)onScheduler:addFailureBlock:;
- (id)delegate;
- (void)addSuccessBlock:;
- (void).cxx_destruct;
- (id)initWithScheduler:block:;
- (id)resultBeforeDate:error:;
@end
