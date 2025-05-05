@interface MRLazyProxy : NSProxy
@property (nonatomic) @? objectCallback;
@property (nonatomic) Protocol protocol;
- (id)protocol;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)objectCallback;
+ (id)proxyWithProtocol:objectCallback:;
@end
