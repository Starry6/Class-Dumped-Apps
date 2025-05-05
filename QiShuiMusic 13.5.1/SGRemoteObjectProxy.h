@interface SGRemoteObjectProxy : NSObject
- (id)initWithConnection:queuesRequestsIfBusy:;
- (id)initWithInProcessSuggestManager:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
@end
