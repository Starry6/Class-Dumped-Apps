@interface IOSurfaceRemoteServer : NSObject
@property (nonatomic) NSObject<OS_xpc_object> listener;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSMutableArray clients;
- (void)setClients:;
- (void)shutdown;
- (id)clients;
- (void)dealloc;
- (id)listener;
- (void).cxx_destruct;
- (void)setQueue:;
- (void)setListener:;
- (id)queue;
- (id)initWithListener:options:;
- (void)_handleClientConnection:;
- (void)_handleClientDisconnected:;
@end
