@interface QLStateManagerProxy : NSObject
@property (nonatomic) <QLPreviewControllerStateProtocolHostOnly> stateManager;
- (BOOL)respondsToSelector:;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
- (id)stateManager;
- (void)dropMethod;
- (void)setStateManager:;
@end
