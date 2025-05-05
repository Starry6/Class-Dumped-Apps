@interface NSXPCListener : NSObject
@property (nonatomic) <NSXPCListenerDelegate> delegate;
@property (nonatomic) NSXPCListenerEndpoint endpoint;
- (void)setOptions:;
- (void)dealloc;
- (void)__receiveRemoteConnection:;
- (id)_xpcConnection;
- (void)setDelegate:;
- (void)stop;
- (id)serviceName;
- (void)suspend;
- (id)_initWithRemoteName:;
- (void)resume;
- (id)delegate;
- (id)endpoint;
- (id)description;
- (id)_initShared;
- (void)_setQueue:;
- (id)initWithMachServiceName:;
- (id)initWithServiceName:;
- (id)_queue;
- (void)invalidate;
- (id)__initWithoutRemoteConnection;
- (void)activate;
+ (id)anonymousListener;
+ (id)serviceListener;
+ (void)enableTransactions;
+ (id)_UUID;
@end
