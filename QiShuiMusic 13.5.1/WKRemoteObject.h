@interface WKRemoteObject : NSObject
- (id)methodSignatureForSelector:;
- (id)_initWithObjectRegistry:interface:;
- (BOOL)conformsToProtocol:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id).cxx_construct;
@end
