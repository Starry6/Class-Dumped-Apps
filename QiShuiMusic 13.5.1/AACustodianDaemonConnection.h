@interface AACustodianDaemonConnection : NSObject
@property (nonatomic) NSXPCListenerEndpoint listenerEndpoint;
- (id)_connection;
- (id)initWithListenerEndpoint:;
- (id)init;
- (void)dealloc;
- (id)synchronousRemoteObjectProxyWithErrorHandler:;
- (void)_connectionInterruptionHandler;
- (void)_connectionInvalidationHandler;
- (id)remoteObjectProxyWithErrorHandler:;
- (void).cxx_destruct;
- (id)listenerEndpoint;
@end
