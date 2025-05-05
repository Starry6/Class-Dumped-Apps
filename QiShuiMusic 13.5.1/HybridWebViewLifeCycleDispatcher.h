@interface HybridWebViewLifeCycleDispatcher : NSObject
@property (nonatomic) NSHashTable innerLifecycleClients;
@property (nonatomic) NSArray lifecycleClients;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addLifecycleClient:;
- (id)innerLifecycleClients;
- (id)lifecycleClients;
- (void)removeLifecycleClient:;
- (void)setInnerLifecycleClients:;
- (BOOL)respondsToSelector:;
- (id)init;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (void)dummyMethod;
+ (id)signatureMap;
@end
