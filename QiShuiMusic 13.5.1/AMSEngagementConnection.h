@interface AMSEngagementConnection : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSNotificationCenter notificationCenter;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) <AMSEngagementServiceProtocol> proxy;
@property (nonatomic) @? errorHandler;
- (void)setProxy:;
- (void)dealloc;
- (id)proxy;
- (id)errorHandler;
- (void)setNotificationCenter:;
- (id)notificationCenter;
- (id)_makeExportedClientConnectionInterface;
- (void)_removeRemoteConnection;
- (void)setErrorHandler:;
- (void)treatmentsDidSyncronize;
- (id)_newRemoteConnection;
- (id)_makeRemoteConnectionInterface;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)initWithNotificationCenter:;
- (void)handlePushedEvent:;
- (id)queue;
@end
