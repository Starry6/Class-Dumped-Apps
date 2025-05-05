@interface PPXPCClientHelper : NSObject
- (void)dealloc;
- (id)synchronousRemoteObjectProxyWithErrorHandler:;
- (id)remoteObjectProxy;
- (void).cxx_destruct;
- (void)_locked_establishConnection;
- (id)initWithServiceName:allowedServerInterface:allowedClientInterface:clientExportedObject:interruptionHandler:invalidationHandler:;
@end
