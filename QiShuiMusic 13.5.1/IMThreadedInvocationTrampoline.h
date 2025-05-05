@interface IMThreadedInvocationTrampoline : IMInvocationTrampoline
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)initWithTarget:thread:immediateForMatchingThread:;
@end
