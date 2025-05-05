@interface IMDelayedInvocationTrampoline : IMInvocationTrampoline
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)initWithTarget:delay:modes:;
@end
