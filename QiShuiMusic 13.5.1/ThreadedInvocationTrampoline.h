@interface ThreadedInvocationTrampoline : InvocationTrampoline
- (void)dealloc;
- (void)forwardInvocation:;
- (id)initWithTarget:thread:immediateForMatchingThread:;
@end
