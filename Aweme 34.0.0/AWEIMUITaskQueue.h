@interface AWEIMUITaskQueue : NSObject
@property (nonatomic) NSArray serialTaskQueue;
@property (nonatomic) NSString overExecutingTimerName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)enqueueUITask:;
- (void)cancelAllTasksOfMergeID:;
- (BOOL)containsTaskOfBizID:;
- (void)task:stateDidChangeFrom:to:;
- (id)serialTaskQueue;
- (void)setSerialTaskQueue:;
- (void)tryToFireFirstReadyTask;
- (void)removeAllInvalidTasks;
- (id)overExecutingTimerName;
- (void)setOverExecutingTimerName:;
- (void)performTask:;
- (id)init;
- (void)removeTask:;
- (void).cxx_destruct;
- (id)tasks;
- (BOOL)containsTask:;
+ (id)sharedInstance;
@end
