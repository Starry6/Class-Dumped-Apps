@interface AMSUniqueExecutionQueue : NSObject
@property (nonatomic) @? block;
@property (nonatomic) NSObject<OS_dispatch_queue> completionCallbacksQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> executeBlockQueue;
@property (nonatomic) AMSPromise executionPromise;
@property (nonatomic) NSObject<OS_dispatch_queue> executionPromiseAccessQueue;
- (id)block;
- (void)addCompletionBlock:;
- (id)initWithBlock:;
- (void).cxx_destruct;
- (void)setBlock:;
- (void)addCompletionBlockForSubsequentExecution:;
- (void)_beginExecutingBlockWithPromise:;
- (id)_createExecutionPromise;
- (id)completionCallbacksQueue;
- (void)setCompletionCallbacksQueue:;
- (id)executeBlockQueue;
- (void)setExecuteBlockQueue:;
- (id)executionPromise;
- (void)setExecutionPromise:;
- (id)executionPromiseAccessQueue;
@end
