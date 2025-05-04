@interface AWENetTaskQueue : NSObject
@property (nonatomic) NSMutableArray tasks;
@property (nonatomic) NSMapTable taskMaper;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dequeueTaskNamed:;
- (BOOL)taskExistNamed:;
- (void)setTaskMaper:;
- (id)taskMaper;
- (id)init;
- (id)dequeue;
- (void).cxx_destruct;
- (void)enqueue:;
- (void)setTasks:;
- (id)tasks;
- (unsigned long long)taskCount;
@end
