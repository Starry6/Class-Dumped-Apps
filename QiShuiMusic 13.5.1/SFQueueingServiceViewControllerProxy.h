@interface SFQueueingServiceViewControllerProxy : NSProxy
@property (nonatomic) @ target;
@property (nonatomic) <SFQueueingServiceViewControllerProxyDelegate> delegate;
- (id)initWithProtocol:;
- (void)setDelegate:;
- (id)methodSignatureForSelector:;
- (void)setTarget:;
- (id)delegate;
- (void).cxx_destruct;
- (id)target;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
@end
