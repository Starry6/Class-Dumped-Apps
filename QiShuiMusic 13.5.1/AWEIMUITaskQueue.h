@interface AWEIMUITaskQueue : NSObject
@property (nonatomic) NSArray serialTaskQueue;
@property (nonatomic) NSString overExecutingTimerName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)serialTaskQueue;
- (BOOL)containsTask:;
- (BOOL)containsTaskOfMergeID:;
- (void)enqueueUITask:;
- (id)findTaskOfMergeID:;
- (void)insertTask:atIndex:;
- (id)overExecutingTimerName;
- (void)removeAllInvalidTasks;
- (void)removeAllTasksOfMergeID:;
- (void)setOverExecutingTimerName:;
- (void)setSerialTaskQueue:;
- (void)task:stateDidChangeFrom:to:;
- (void)tryToFireFirstReadyTask;
- (void)removeTask:;
- (id)init;
- (void).cxx_destruct;
- (id)tasks;
+ (id)sharedInstance;
@end
