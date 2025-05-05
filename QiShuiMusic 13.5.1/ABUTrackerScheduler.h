@interface ABUTrackerScheduler : NSObject
@property (nonatomic) BOOL executingTask;
@property (nonatomic) NSMutableArray waitingTaskList;
@property (nonatomic) BOOL mode;
@property (nonatomic) @? noTaskWaitingAction;
- (id)destory;
- (id)waitingTaskList;
- (BOOL)executingTask;
- (id)noTaskWaitingAction;
- (void)setExecutingTask:;
- (void)setNoTaskWaitingAction:;
- (void)setWaitingTaskList:;
- (id)init;
- (void).cxx_destruct;
- (BOOL)mode;
- (void)setMode:;
- (void)executeTask:;
+ (id)schedulerWithMode:;
@end
