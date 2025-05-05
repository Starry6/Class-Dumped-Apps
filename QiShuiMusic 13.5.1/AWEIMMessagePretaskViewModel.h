@interface AWEIMMessagePretaskViewModel : NSObject
@property (nonatomic) AWEIMTaskManager taskManager;
- (void)didEndDisplayingCell:message:;
- (void)removeAllTasks;
- (void)willDisplayCell:message:;
- (id)init;
- (void).cxx_destruct;
- (id)taskManager;
- (void)setTaskManager:;
@end
