@interface LynxLifecycleDispatcher : NSObject
@property (nonatomic) NSArray lifecycleClients;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addLifecycleClient:;
- (id)lifecycleClients;
- (void)lynxView:didRecieveError:;
- (void)removeLifecycleClient:;
- (id)init;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (void)dummyMethod;
@end
