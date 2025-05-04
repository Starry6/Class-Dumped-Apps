@interface AWECampaignTaskLogHelper : NSObject
+ (void)logReceiveTaskWithParam:;
+ (void)logTaskOpenFailForReason:withParam:;
+ (void)logTaskOpenSuccessWithParam:;
+ (void)logTaskFinishWithUseDay:withParam:;
+ (void)logTaskCacheForType:withParam:;
+ (void)logTaskRunFailForError:withParam:;
+ (void)logMonitorViewClickedByReason:withParam:;
+ (void)logMonitorViewDismissForReason:withParam:;
+ (id)commonParamForTaskID:withActivityName:isCache:taskType:;
+ (id)commonParamForUGModel:withCache:;
@end
