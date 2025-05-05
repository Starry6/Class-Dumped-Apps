@interface FMXPCSession : NSObject
@property (nonatomic) @ _proxy;
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) FMXPCServiceDescription serviceDescription;
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSUUID identifier;
@property (nonatomic) @ proxy;
- (id)serviceDescription;
- (id)syncProxyWithErrorHandler:;
- (void)dealloc;
- (id)proxy;
- (void)setServiceDescription:;
- (id)identifier;
- (void)destroyXPCConnection;
- (id)serialQueue;
- (void)set_proxy:;
- (void)suspend;
- (id)_proxy;
- (void)resume;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)initWithServiceDescription:;
- (void)setSerialQueue:;
- (void)invalidate;
@end
