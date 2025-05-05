@interface IMCapturedInvocationTrampoline : IMInvocationTrampoline
- (void)forwardInvocation:;
- (id)initWithTarget:outInvocation:;
@end
