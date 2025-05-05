@interface IESLiveTaskScheduler : NSObject
- (id)topTask;
- (void)addTask:name:identifier:priority:;
- (void)addTask:priority:;
- (void)clearTasksWithIdentifier:;
- (BOOL)executeTaskImmediately:identifier:;
- (void)executeTasks;
- (id)initWithTaskDuration:observer:;
- (void)addTask:;
- (id)init;
- (BOOL)empty;
- (void).cxx_destruct;
- (void)clearTasks;
- (void)clean;
@end
