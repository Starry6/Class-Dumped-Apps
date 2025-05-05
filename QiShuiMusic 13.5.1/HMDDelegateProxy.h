@interface HMDDelegateProxy : NSProxy
@property (nonatomic) @ target;
@property (nonatomic) <HMDUITrackable> consignor;
- (id)consignor;
- (id)initWithTarget:consignor:;
- (BOOL)respondsToSelector:;
- (void)dealloc;
- (BOOL)isMemberOfClass:;
- (id)methodSignatureForSelector:;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)setTarget:;
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
+ (id)proxyWithTarget:consignor:;
@end
