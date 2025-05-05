@interface AMSUniversalLinksConnection : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) <AMSUniversalLinksServiceProtocol> proxy;
- (id)init;
- (void)dealloc;
- (id)proxy;
- (void)_removeRemoteConnection;
- (id)_newRemoteConnection;
- (id)_makeRemoteConnectionInterface;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)setQueue:;
- (id)queue;
@end
