@interface AWENetTaskQueue : NSObject
@property (nonatomic) NSMutableArray tasks;
@property (nonatomic) NSMapTable taskMaper;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)taskExistNamed:;
- (id)dequeueTaskNamed:;
- (void)setTaskMaper:;
- (id)taskMaper;
- (id)init;
- (void)enqueue:;
- (id)dequeue;
- (void).cxx_destruct;
- (id)tasks;
- (void)setTasks:;
- (unsigned long long)taskCount;
@end
