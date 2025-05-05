@interface CKOperationCallbackProxy : CKWeakObjectCallbackProxy
- (id)initWithOperation:callbackProtocol:;
- (void)forwardInvocation:;
@end
