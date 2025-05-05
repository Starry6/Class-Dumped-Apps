@interface UIKBTouchOrderedTaskList : NSObject
@property (nonatomic) NSUUID touchUUID;
@property (nonatomic) Q pathIndex;
@property (nonatomic) double originalStartTime;
@property (nonatomic) NSValue currentTouchPoint;
@property (nonatomic) BOOL ignoredOnBegin;
@property (nonatomic) BOOL hasTasks;
- (void)addTask:;
- (void)dealloc;
- (BOOL)hasTasks;
- (void).cxx_destruct;
- (unsigned long long)pathIndex;
- (id)touchUUID;
- (id)initWithTouchUUID:withPathIndex:;
- (BOOL)isExecutingFirstTask;
- (void)removeTasksMatchingFilter:;
- (BOOL)executeTasksInView:withBlock:;
- (id)firstTouchStateForUITouchPhase:;
- (id)currentTouchPoint;
- (double)originalStartTime;
- (BOOL)ignoredOnBegin;
- (void)setIgnoredOnBegin:;
+ (id)taskListForTouchUUID:withPathIndex:;
@end
