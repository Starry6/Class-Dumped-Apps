@interface QLDelegateProxy : NSProxy
@property (nonatomic) @ firstDelegate;
@property (nonatomic) @ secondDelegate;
- (BOOL)respondsToSelector:;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
- (id)firstDelegate;
- (void)setFirstDelegate:;
- (id)secondDelegate;
- (void)setSecondDelegate:;
@end
