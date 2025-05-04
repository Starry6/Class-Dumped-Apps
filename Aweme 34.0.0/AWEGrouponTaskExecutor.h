@interface AWEGrouponTaskExecutor : NSObject
@property (nonatomic) BOOL isExecutorRunning;
@property (nonatomic) NSMutableArray executingQueue;
@property (nonatomic) q pageType;
@property (nonatomic) @? skipBlock;
- (id)initWithPageType:;
- (void)enterExecutionQueue:;
- (id)executingQueue;
- (void)__tryToStartExecutingQueue;
- (BOOL)isExecutorRunning;
- (void)setIsExecutorRunning:;
- (void)__executeTasks;
- (void)__executeTask:;
- (void)__taskRunCheck:;
- (void)setExecutingQueue:;
- (void)setPageType:;
- (void).cxx_destruct;
- (long long)pageType;
- (void)setSkipBlock:;
- (id)skipBlock;
@end
