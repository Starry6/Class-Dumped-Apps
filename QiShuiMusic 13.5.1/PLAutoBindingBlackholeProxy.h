@interface PLAutoBindingBlackholeProxy : NSProxy
- (BOOL)respondsToSelector:;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)initWithTargetObject:;
@end
