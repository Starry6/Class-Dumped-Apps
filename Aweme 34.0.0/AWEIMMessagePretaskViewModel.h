@interface AWEIMMessagePretaskViewModel : NSObject
@property (nonatomic) AWEIMTaskManager taskManager;
- (void)removeAllTasks;
- (void)didEndDisplayingCell:message:;
- (void)willDisplayCell:message:;
- (id)init;
- (void).cxx_destruct;
- (id)taskManager;
- (void)setTaskManager:;
@end
