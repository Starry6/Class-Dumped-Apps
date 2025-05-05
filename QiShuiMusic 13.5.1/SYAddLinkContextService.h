@interface SYAddLinkContextService : NSObject
@property (nonatomic) NSXPCListener _listener;
@property (nonatomic) NSObject<OS_dispatch_queue> _serviceQueue;
@property (nonatomic) BOOL _forTesting;
@property (nonatomic) <SYAddLinkContextServiceDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)set_listener:;
- (void)set_serviceQueue:;
- (id)_listener;
- (id)initForTesting:;
- (void)setDelegate:;
- (id)userWillAddLinkWithActivityData:completion:;
- (id)delegate;
- (id)userDidRemoveContentItemDatas:;
- (void)beginListeningToConnections;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)_listenerEndpoint;
- (id)_serviceQueue;
- (id)userEditDidAddContentItemDatas:;
- (BOOL)_forTesting;
@end
