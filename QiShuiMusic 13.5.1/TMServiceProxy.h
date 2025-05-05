@interface TMServiceProxy : NSObject
@property (nonatomic) <TMModuleService> service;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithService:;
- (BOOL)respondsToSelector:;
- (void)setService:;
- (BOOL)isMemberOfClass:;
- (id)methodSignatureForSelector:;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)service;
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
