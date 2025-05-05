@interface AMSPromiseCompletionBlocks : NSObject
- (void)addCompletionBlock:;
- (id)init;
- (void)callErrorBlock:withPromiseResult:;
- (void)addSuccessBlock:;
- (void).cxx_destruct;
- (void)callSuccessBlock:withPromiseResult:;
- (void)flushCompletionBlocksWithPromiseResult:;
- (void)addErrorBlock:;
- (void)callCompletionBlock:withPromiseResult:;
@end
