@interface AMSHTTPArchiveService : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) @? errorHandler;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)init;
- (void)dealloc;
- (id)errorHandler;
- (id)_createRemoteConnection;
- (void)_removeRemoteConnection;
- (void)setErrorHandler:;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)setQueue:;
- (id)_createProxy;
- (id)queue;
+ (id)_sharedProxy;
+ (void)recordTrafficWithTaskInfo:;
@end
