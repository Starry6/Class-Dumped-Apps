@interface DanceUIScrollViewDelegateProxy : NSProxy
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithMasterDelegate:slaveDelegates:;
- (id)masterDelegate;
- (id)slaveDelegates;
- (BOOL)respondsToSelector:;
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
- (void)forwardInvocation:;
- (BOOL)isEqual:;
- (id)self;
- (id)performSelector:;
- (id)performSelector:withObject:;
- (id)performSelector:withObject:withObject:;
+ (id)proxyWithMasterDelegate:;
+ (id)proxyWithMasterDelegate:slaveDelegates:;
@end
