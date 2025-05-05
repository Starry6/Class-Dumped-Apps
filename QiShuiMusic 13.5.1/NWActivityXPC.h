@interface NWActivityXPC : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) I qosClass;
@property (nonatomic) NSMutableArray pendingCompletionHandlers;
- (void)cancel;
- (void)dealloc;
- (void)start;
- (unsigned int)qosClass;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)description;
- (void)setQueue:;
- (id)queue;
- (void)retrieveMetricsForActivity:completion:;
- (id)initWithQueue:qosClass:;
- (void)setQosClass:;
- (id)pendingCompletionHandlers;
- (void)setPendingCompletionHandlers:;
@end
