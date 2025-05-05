@interface EDServer : NSObject
@property (nonatomic) NSXPCListener listener;
@property (nonatomic) EFLocked connectedClients;
@property (nonatomic) EDDaemonInterfaceFactory daemonInterfaceFactory;
@property (nonatomic) NSXPCListenerEndpoint serverXPCEndpoint;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray remoteClients;
- (void)start;
- (id)initWithDaemonInterfaceFactory:;
- (id)threadReconciliationQueries;
- (id)serverXPCEndpoint;
- (id)listener;
- (id)messageReconciliationQueries;
- (void)addRemoteClient:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)remoteClients;
- (id)daemonInterfaceFactory;
- (void)setDaemonInterfaceFactory:;
- (id)connectedClients;
- (void)removeRemoteClient:;
- (void)setListener:;
- (void)test_tearDown;
- (id)initWithDaemonInterfaceFactory:listener:;
+ (id)log;
@end
