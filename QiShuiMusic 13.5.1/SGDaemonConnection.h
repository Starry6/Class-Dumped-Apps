@interface SGDaemonConnection : NSObject
- (void)_callAbortBlocks;
- (id)waitUntilReturn:withTimeout:error:;
- (void)dealloc;
- (id)synchronousRemoteObjectProxyWithErrorHandler:;
- (void)disconnect;
- (id)remoteObjectProxy;
- (id)initWithMachServiceName:xpcInterface:;
- (void)addConnectionInterruptedHandler:;
- (void)_connectToServer;
- (id)remoteObjectProxyWithErrorHandler:;
- (id)xpcConnection;
- (void).cxx_destruct;
+ (BOOL)usingSyncXPC;
+ (void)_useSyncXPCWithBlock:;
@end
