@interface CapturedInvocationTrampoline : InvocationTrampoline
- (void)forwardInvocation:;
- (id)initWithTarget:outInvocation:;
@end
