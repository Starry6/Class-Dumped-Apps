@interface AWEXPlayPopupTaskManager : NSObject
@property (nonatomic) NSMutableArray tasks;
@property (nonatomic) BOOL isRunning;
- (void)runTasks;
- (void)setIsRunning:;
- (id)init;
- (void)addTask:;
- (void).cxx_destruct;
- (BOOL)isRunning;
- (void)setTasks:;
- (id)tasks;
@end
