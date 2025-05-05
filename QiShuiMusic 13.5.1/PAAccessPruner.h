@interface PAAccessPruner : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)initWithConnection:queue:;
- (void)dealloc;
- (id)connection;
- (void).cxx_destruct;
- (id)initWithQueue:;
- (id)queue;
- (void)pruneEventsFromStartTime:toEndTime:completionHandler:;
+ (id)sharedInstance;
@end
