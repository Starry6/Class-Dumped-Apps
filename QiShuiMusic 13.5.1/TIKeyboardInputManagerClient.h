@interface TIKeyboardInputManagerClient : NSObject
@property (nonatomic) NSXPCConnection connection;
- (BOOL)respondsToSelector:;
- (id)init;
- (void)dealloc;
- (void)handleRequest:;
- (id)methodSignatureForSelector:;
- (BOOL)conformsToProtocol:;
- (void)handleError:forRequest:;
- (id)connection;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (void)setConnection:;
- (void)forwardInvocation:;
- (id)initWithImplProxy:;
+ (BOOL)instancesRespondToSelector:;
@end
