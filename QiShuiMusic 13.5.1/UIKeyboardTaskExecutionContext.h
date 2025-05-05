@interface UIKeyboardTaskExecutionContext : NSObject
@property (nonatomic) UIKeyboardTaskQueue executionQueue;
@property (nonatomic) @ info;
- (id)init;
- (id)executionQueue;
- (id)initWithExecutionQueue:;
- (void)setPendingCompletionBlock:;
- (void)setInfo:;
- (void)returnExecutionToParent;
- (void).cxx_destruct;
- (id)childWithContinuation:;
- (id)info;
- (void)returnExecutionToParentWithInfo:;
- (id)takeOwnershipOfPendingCompletionBlock;
- (id)initWithParentContext:continuation:;
- (void)transferExecutionToMainThreadWithTask:;
@end
