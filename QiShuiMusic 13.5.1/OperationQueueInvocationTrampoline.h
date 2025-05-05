@interface OperationQueueInvocationTrampoline : InvocationTrampoline
- (void)dealloc;
- (void)forwardInvocation:;
- (id)initWithTarget:operationQueue:priority:;
@end
