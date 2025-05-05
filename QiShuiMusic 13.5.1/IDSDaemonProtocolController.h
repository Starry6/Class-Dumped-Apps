@interface IDSDaemonProtocolController : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) <IDSGroupContextDataSourceDaemonProtocol> groupContextDataSource;
@property (nonatomic) <IDSGroupContextCacheMiddlewareDaemonProtocol> groupContextCacheMiddleware;
@property (nonatomic) IDSGroupContextNotifyingObserver observer;
- (id)init;
- (void)setObserver:;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)observer;
- (id)groupContextDataSource;
- (id)groupContextCacheMiddleware;
+ (id)sharedInstance;
@end
