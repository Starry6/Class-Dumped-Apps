@interface GSDaemonProxySync : NSProxy
@property (nonatomic) @ result;
@property (nonatomic) NSError error;
- (id)result;
- (void)setError:;
- (id)methodSignatureForSelector:;
- (id)error;
- (void)finalize;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)initWithXPCObject:;
- (void)setResult:;
- (void)handleBoolResult:error:;
- (void)handleObjResult:error:;
- (id)copyCFError;
+ (id)proxy;
@end
