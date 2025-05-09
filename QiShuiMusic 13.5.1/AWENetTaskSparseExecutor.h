@interface AWENetTaskSparseExecutor : AWENetTaskQueue
@property (nonatomic) AWENetTaskTimer timer;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL allTasksFinished;
@property (nonatomic) double interval;
@property (nonatomic) double minDuration;
@property (nonatomic) <AWENetTaskExecutorDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMinDuration:;
- (BOOL)allTasksFinished;
- (BOOL)executeImmediately:;
- (void)executeTopTask;
- (BOOL)executorFinished;
- (void)setAllTasksFinished:;
- (void)startExecute;
- (void)updateQueueStateIfNeeded;
- (id)init;
- (void)enqueue:;
- (void)runTask:;
- (void)setStartTime:;
- (void)setDelegate:;
- (double)startTime;
- (void)setTimer:;
- (void)setInterval:;
- (id)delegate;
- (void).cxx_destruct;
- (id)timer;
- (double)interval;
- (double)minDuration;
+ (id)executorWithDelegate:interval:;
@end
