@interface AWEUGPendantTaskManager : NSObject
@property (nonatomic) NSMutableArray tasksArray;
@property (nonatomic) <AWEUGPendantTaskProtocol> currentTask;
@property (nonatomic) BOOL isPaused;
- (id)tasksArray;
- (void)startNextTask;
- (void)setTasksArray:;
- (id)init;
- (void)resume;
- (void)addTask:;
- (void)setIsPaused:;
- (id)currentTask;
- (void)setCurrentTask:;
- (BOOL)isPaused;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)pause;
+ (id)shareInstance;
@end
