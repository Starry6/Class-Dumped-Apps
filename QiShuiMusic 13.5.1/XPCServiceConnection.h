@interface XPCServiceConnection : NSObject
@property (nonatomic) NSObject<OS_xpc_object> client;
@property (nonatomic) XPCServiceListener serviceListener;
@property (nonatomic) NSObject<OS_dispatch_queue> workQueue;
@property (nonatomic) NSString serviceName;
@property (nonatomic) <XPCServiceConnectionDelegate> delegate;
@property (nonatomic) <NSObject> context;
- (void)shutDownCompletionBlock:;
- (void)setWorkQueue:;
- (id)context;
- (void)workQueueHandleIncomingMessage:;
- (id)workQueue;
- (void)setDelegate:;
- (id)serviceListener;
- (void)sendMessage:withHandler:;
- (id)serviceName;
- (id)debugDescription;
- (void)resume;
- (id)delegate;
- (id)client;
- (void)workQueueShutDown;
- (void).cxx_destruct;
- (void)setServiceListener:;
- (void)setContext:;
- (id)initWithServiceName:client:queue:;
@end
