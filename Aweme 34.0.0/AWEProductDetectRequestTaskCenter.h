@interface AWEProductDetectRequestTaskCenter : NSObject
@property (nonatomic) NSMutableDictionary requestTaskMap;
@property (nonatomic) NSMutableArray pendingTasks;
- (id)requestTaskMap;
- (void)networkingReachabilityDidChange:;
- (void)replayRequests;
- (void)setRequestTaskMap:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)pendingTasks;
- (void)setPendingTasks:;
+ (id)defaultCenter;
@end
