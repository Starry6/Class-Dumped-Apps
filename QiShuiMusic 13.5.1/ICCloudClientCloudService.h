@interface ICCloudClientCloudService : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) <ICCloudServerListenerEndpointProviding> listenerEndpointProvider;
@property (nonatomic) NSXPCConnection xpcConnection;
- (id)serialQueue;
- (id)xpcConnection;
- (void).cxx_destruct;
- (id)listenerEndpointProvider;
- (id)initWithListenerEndpointProvider:;
- (id)_xpcConnectionWithListenerEndpoint:;
@end
