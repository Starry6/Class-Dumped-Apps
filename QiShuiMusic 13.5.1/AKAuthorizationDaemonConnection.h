@interface AKAuthorizationDaemonConnection : NSObject
@property (nonatomic) NSXPCListenerEndpoint listenerEndpoint;
- (id)_connection;
- (id)init;
- (void)dealloc;
- (id)synchronousRemoteObjectProxyWithErrorHandler:;
- (void)_connectionInterruptionHandler;
- (void)_connectionInvalidationHandler;
- (id)remoteObjectProxyWithErrorHandler:;
- (id)initWithListenerEndpoint:exportedInterface:;
- (void).cxx_destruct;
- (id)listenerEndpoint;
@end
