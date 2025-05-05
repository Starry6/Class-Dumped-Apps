@interface XPCServiceListener : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> workQueue;
@property (nonatomic) NSObject<OS_xpc_object> listener;
@property (nonatomic) NSMutableSet serviceConnections;
@property (nonatomic) Q clientCount;
@property (nonatomic) NSString serviceName;
@property (nonatomic) <XPCServiceListenerDelegate> delegate;
- (void)shutDownCompletionBlock:;
- (void)setServiceConnections:;
- (void)setWorkQueue:;
- (void)start;
- (id)workQueue;
- (id)serviceName;
- (id)listener;
- (id)debugDescription;
- (void)serviceConnectionDidDisconnect:;
- (void)setClientCount:;
- (id)delegate;
- (void)_workQueueShutDownServiceConnections:index:completionBlock:;
- (void)workQueueHandleIncomingConnection:;
- (void).cxx_destruct;
- (id)serviceConnections;
- (id)initWithServiceName:queue:delegate:;
- (void)setListener:;
- (unsigned long long)clientCount;
@end
