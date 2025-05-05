@interface PIAWeakProxy : NSProxy
@property (nonatomic) @ object;
- (void)setObject:;
- (BOOL)respondsToSelector:;
- (BOOL)isMemberOfClass:;
- (id)methodSignatureForSelector:;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithObject:;
- (BOOL)conformsToProtocol:;
- (Class)superclass;
- (BOOL)isProxy;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (id)object;
- (Class)class;
- (id)description;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
- (BOOL)isEqual:;
+ (id)weakProxy:;
@end
