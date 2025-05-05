@interface MPMiddlewareChain : NSObject
@property (nonatomic) : builderSelector;
- (id)nextObject;
- (id)initWithMiddleware:protocol:;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (void)setBuilderSelector:;
- (void)forwardInvocation:;
- (SEL)builderSelector;
+ (id)builderProxyForProtocol:;
@end
