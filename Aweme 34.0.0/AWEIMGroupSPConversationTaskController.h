@interface AWEIMGroupSPConversationTaskController : NSObject
@property (nonatomic) NSString conversationID;
- (BOOL)isDowngrade;
- (id)getTaskModels;
- (id)asyncGetTaskModels;
- (id)taskModelWithTaskID:;
- (id)asyncGetTaskModelWithTaskID:;
- (id)asyncGetTaskModelIncludeInvalidTaskWithTaskID:;
- (id)tasksWithType:;
- (id)getLatestIsRunningTaskWithType:;
- (id)pullTasksInfoFromServerWithContext:;
- (void)receiveTaskCommand:;
- (id)updateLocalExtOfTask:withKey:value:;
- (id)getNearestRedPacketRainTask;
- (id)notifyTasksResortByReason:;
- (id)refreshValidTasksByReason:;
- (id)addLocalTask:;
- (void)__insertRewardPopupWithTaskCommandModel:;
- (void)addObserver;
- (id)conversationID;
- (void)removeObserver;
- (void).cxx_destruct;
- (id)initWithConversationID:;
@end
