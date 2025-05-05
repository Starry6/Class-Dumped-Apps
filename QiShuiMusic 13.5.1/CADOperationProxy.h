@interface CADOperationProxy : NSObject
- (void)dealloc;
- (id)methodSignatureForSelector:;
- (id)initWithClientConnection:;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
- (void)_emptyMethod;
- (id)_operationGroupForClass:;
- (id)_copyReplyBlockFromInvocation:;
- (void)_callReplyHandler:ofInvocation:withError:;
+ (id)allOperationGroupClasses;
+ (Class)operationProxyClassForClientWithConnection:;
+ (Class)_operationGroupClassFromSelector:;
+ (BOOL)_selectorMayBeCalledBeforeInitialization:;
@end
