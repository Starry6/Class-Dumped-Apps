@interface MFWeakProxy : NSProxy
- (BOOL)respondsToSelector:;
- (void)dealloc;
- (id)methodSignatureForSelector:;
- (unsigned long long)hash;
- (id)initWithObject:;
- (id)descriptionWithLocale:;
- (BOOL)conformsToProtocol:;
- (Class)superclass;
- (BOOL)isProxy;
- (Class)class;
- (id)description;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
- (BOOL)isEqual:;
- (id)self;
- (void)doesNotRecognizeSelector:;
+ (id)weakProxyForObject:;
@end
