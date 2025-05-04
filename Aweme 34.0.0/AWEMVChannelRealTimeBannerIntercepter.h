@interface AWEMVChannelRealTimeBannerIntercepter : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSMutableArray pendingTasks;
@property (nonatomic) BOOL isAllTaskExecuted;
@property (nonatomic) BOOL isExecutingTasks;
@property (nonatomic) AWEMVChannelPerformanceMonitor perfMonitor;
- (id)perfMonitor;
- (void)setPerfMonitor:;
- (void)didFetchedBanner;
- (BOOL)isAllTaskExecuted;
- (void)addPendingHandleResponseTask:;
- (void)setIsAllTaskExecuted:;
- (void)executePendingTasks;
- (BOOL)isExecutingTasks;
- (void)setIsExecutingTasks:;
- (id)init;
- (void)setQueue:;
- (void).cxx_destruct;
- (id)queue;
- (id)pendingTasks;
- (void)setPendingTasks:;
+ (id)sharedInstance;
@end
