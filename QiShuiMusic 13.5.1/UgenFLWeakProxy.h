@interface UgenFLWeakProxy : NSProxy
@property (nonatomic) @ target;
- (id)methodSignatureForSelector:;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)target;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
+ (id)weakProxyForObject:;
@end
