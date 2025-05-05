@interface ICRemoteRequestOperationController : NSObject
- (void)_clientConnectionInvalidationTimerDidExpire;
- (void)_cancelClientConnectionInvalidationTimer;
- (void)_scheduleInvalidationOfClientConnection;
- (id)_clientConnection;
- (void)_didEndExecutingRemoteRequestOperation;
- (void)_invalidateClientConnection;
- (void).cxx_destruct;
- (void)performRemoteRequestOperationWithExecutionContext:completionHandler:;
- (void)_willBeginExecutingRemoteRequestOperation;
- (id)_init;
+ (id)sharedRemoteRequestOperationController;
@end
