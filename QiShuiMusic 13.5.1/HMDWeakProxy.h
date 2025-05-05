@interface HMDWeakProxy : NSProxy
@property (nonatomic) @ strongTarget;
@property (nonatomic) @ target;
- (void)releaseTarget;
- (void)retainTarget;
- (BOOL)respondsToSelector:;
- (id)initWithTarget:;
- (BOOL)isMemberOfClass:;
- (id)methodSignatureForSelector:;
- (unsigned long long)hash;
- (id)debugDescription;
- (BOOL)conformsToProtocol:;
- (Class)superclass;
- (BOOL)isProxy;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (Class)class;
- (id)target;
- (id)description;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
- (BOOL)isEqual:;
- (id)strongTarget;
- (void)setStrongTarget:;
+ (id)proxyWithTarget:;
@end
