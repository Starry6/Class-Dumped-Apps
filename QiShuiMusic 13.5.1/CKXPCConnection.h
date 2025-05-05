@interface CKXPCConnection : NSObject
@property (nonatomic) NSXPCConnection connection;
- (void)getProcessScopedClientProxyCreatorWithCompletionHandler:;
- (void)resetConnection;
- (void)getContainerScopedDaemonProxyCreatorForContainerSetupInfo:exportedProxy:synchronous:completionHandler:;
- (id)connection;
- (void)getLogicalDeviceScopedClientProxyCreatorForTestDeviceReference:completionHandler:;
- (void).cxx_destruct;
- (id)_init;
- (void)getTestAdminDaemonProxyCreatorSynchronous:completionHandler:;
- (void)getLogicalDeviceScopedDaemonProxyCreatorForTestDeviceReference:synchronous:completionHandler:;
- (void)getProcessScopedDaemonProxyCreatorSynchronous:completionHandler:;
+ (id)CKXPCClientToDaemonMuxerInterface;
+ (id)CKXPCDaemonToClientMuxerInterface;
+ (id)sharedXPCConnection;
@end
