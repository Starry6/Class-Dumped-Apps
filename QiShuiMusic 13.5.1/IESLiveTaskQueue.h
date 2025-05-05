@interface IESLiveTaskQueue : NSObject
- (void)addTask:taskID:;
- (void)addTask:;
- (id)init;
- (BOOL)isEmpty;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)clearTasks;
- (id)runTask;
@end
