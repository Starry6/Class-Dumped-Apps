@interface SYDefaultsClient : NSObject
@property (nonatomic) NSXPCConnection _connection;
@property (nonatomic) NSObject<OS_dispatch_queue> _clientQueue;
- (id)_connection;
- (void)_invalidateConnection;
- (id)init;
- (void)indicatorCoverageWithCompletion:;
- (void)dealloc;
- (void)set_connection:;
- (id)_clientQueue;
- (void)setIndicatorCoverage:completion:;
- (void).cxx_destruct;
- (void)set_clientQueue:;
- (void)_createConnectionIfNeeded;
- (void)_configureConnectionAndResume;
@end
