@interface IMInvocationCapturingProxy : NSProxy
@property (nonatomic) Protocol protocol;
@property (nonatomic) @? forwardingHandler;
- (id)protocol;
- (BOOL)respondsToSelector:;
- (id)methodSignatureForSelector:;
- (id)initWithProtocol:forwardingHandler:;
- (id)forwardingHandler;
- (BOOL)conformsToProtocol:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
@end
