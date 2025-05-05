@interface CNFutureCompletionBlocks : NSObject
- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldCallImmediately;
- (void)setShouldCallImmediately:;
- (void)addSuccessBlock:orCallWithFutureResult:;
- (void)addFailureBlock:orCallWithFutureResult:;
- (void)addCompletionBlock:orCallWithFutureResult:;
- (void)flushCompletionBlocksWithFutureResult:;
@end
