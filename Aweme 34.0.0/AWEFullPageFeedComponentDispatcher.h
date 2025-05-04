@interface AWEFullPageFeedComponentDispatcher : NSObject
@property (nonatomic) AWEShellControllerManager manager;
@property (nonatomic) Protocol currentProtocol;
- (id)initWithManager:protocolType:;
- (void)setManager:;
- (BOOL)respondsToSelector:;
- (id)manager;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)methodSignatureForSelector:;
- (id)currentProtocol;
- (void)setCurrentProtocol:;
+ (BOOL)enableDispatchForType:;
@end
