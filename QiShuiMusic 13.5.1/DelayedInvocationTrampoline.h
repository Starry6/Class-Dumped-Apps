@interface DelayedInvocationTrampoline : InvocationTrampoline
- (void)forwardInvocation:;
- (id)initWithTarget:delay:;
@end
