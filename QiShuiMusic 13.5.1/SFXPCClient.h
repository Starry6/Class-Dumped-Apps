@interface SFXPCClient : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onqueue_activate;
- (id)init;
- (void)dealloc;
- (id)exportedInterface;
- (void)interrupted;
- (void)invalidated;
- (id)dispatchQueue;
- (id)machServiceName;
- (void)onqueue_getRemoteObjectProxyOnQueue:;
- (void)onqueue_invalidated;
- (BOOL)shouldEscapeXpcTryCatch;
- (void)setDispatchQueue:;
- (void)onqueue_connectionInterrupted;
- (void)onqueue_interrupted;
- (void)connectionEstablished;
- (void)_invalidate;
- (void)onqueue_ensureConnectionEstablished;
- (void)connection:handleInvocation:isReply:;
- (void)_activate;
- (void)onqueue_invalidate;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)onqueue_connectionInvalidated;
- (void)onqueue_connectionEstablished;
- (void)onqueue_ensureXPCStarted;
- (void)getRemoteObjectProxyOnQueue:;
- (id)remoteObjectInterface;
@end
