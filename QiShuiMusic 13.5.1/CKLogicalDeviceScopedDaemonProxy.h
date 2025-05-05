@interface CKLogicalDeviceScopedDaemonProxy : NSObject
@property (nonatomic) <CKXPCLogicalDeviceScopedDaemon> logicalDeviceScopedDaemonProxyCreator;
@property (nonatomic) BOOL hasValidLogicalDeviceScopedDaemonProxyCreator;
@property (nonatomic) <NSObject> connectionInterruptedObserver;
@property (nonatomic) CKLogicalDeviceContext deviceContext;
- (id)deviceContext;
- (void)setDeviceContext:;
- (void)dealloc;
- (void)setConnectionInterruptedObserver:;
- (id)connectionInterruptedObserver;
- (void).cxx_destruct;
- (void)allClouddThrottlesWithCompletionHandler:;
- (void)addClouddThrottle:;
- (void)clearAllClouddThrottles;
- (id)initWithDeviceContext:;
- (void)_getLogicalDeviceScopedDaemonProxySynchronous:errorHandler:daemonProxyHandler:;
- (void)_getLogicalDeviceScopedDaemonProxyCreatorSynchronous:completionHandler:;
- (id)logicalDeviceScopedDaemonProxyCreator;
- (void)setLogicalDeviceScopedDaemonProxyCreator:;
- (BOOL)hasValidLogicalDeviceScopedDaemonProxyCreator;
- (void)setHasValidLogicalDeviceScopedDaemonProxyCreator:;
+ (id)CKXPCClientToDaemonLogicalDeviceScopedInterface;
+ (id)CKXPCDaemonToClientLogicalDeviceScopedInterface;
@end
