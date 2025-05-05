@interface RxWeakProxy : NSProxy
@property (nonatomic) <NSObject> target;
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
- (id)self;
- (id)performSelector:;
- (id)performSelector:withObject:;
- (id)performSelector:withObject:withObject:;
+ (id)proxyWithTarget:;
@end
