@interface BDAWeakObj : NSProxy
@property (nonatomic) @ obj;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithObj:;
- (BOOL)respondsToSelector:;
- (id)obj;
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
- (id)description;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
- (BOOL)isEqual:;
@end
