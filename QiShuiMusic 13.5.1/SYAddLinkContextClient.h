@interface SYAddLinkContextClient : NSObject
@property (nonatomic) NSXPCConnection _connection;
@property (nonatomic) NSObject<OS_dispatch_queue> _clientQueue;
- (id)_connection;
- (void)_invalidateConnection;
- (id)init;
- (void)dealloc;
- (void)set_connection:;
- (id)_clientQueue;
- (void).cxx_destruct;
- (void)set_clientQueue:;
- (void)_createConnectionIfNeeded;
- (void)createConnectionWithEndpoint:;
- (void)_configureConnectionAndResume;
- (void)userWillAddLinkWithActivity:completion:;
- (void)userDidRemoveContentItems:;
- (void)userEditDidAddContentItems:;
@end
