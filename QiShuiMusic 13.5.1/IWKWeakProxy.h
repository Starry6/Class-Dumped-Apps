@interface IWKWeakProxy : NSProxy
@property (nonatomic) @ target;
- (BOOL)respondsToSelector:;
- (id)initWithTarget:;
- (id)methodSignatureForSelector:;
- (BOOL)conformsToProtocol:;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (id)target;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
+ (id)weakProxyWithTarget:;
@end
