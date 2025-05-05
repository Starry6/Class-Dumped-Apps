@interface UIKeyboardTaskQueue : NSObject
@property (nonatomic) UIKeyboardTaskExecutionContext executionContext;
@property (nonatomic) NSArray activeOriginator;
- (void)addTask:;
- (void)finishExecution;
- (id)init;
- (BOOL)isEmpty;
- (void)setExecutionContext:;
- (id)addAndReturnTask:;
- (id)activeOriginator;
- (void)lockWhenReadyForMainThread;
- (void)promoteDeferredTaskIfIdle;
- (void)setActiveOriginator:;
- (BOOL)isMainThreadExecutingTask;
- (id)executionContext;
- (void)unlock;
- (void)addDeferredTask:;
- (void)lock;
- (void)waitUntilAllTasksAreFinished;
- (BOOL)tryLockWhenReadyForMainThread;
- (void)performTask:;
- (void)performDeferredTaskIfIdle;
- (id)scheduleTask:timeInterval:repeats:;
- (void)performTaskOnMainThread:waitUntilDone:;
- (void).cxx_destruct;
- (void)continueExecutionOnMainThread;
- (void)performSingleTask:;
- (void)waitUntilTaskIsFinished:;
@end
