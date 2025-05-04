@interface AWEFCollectActivityMonitor : NSObject
+ (void)logGoldCollectService:status:extraInfo:;
+ (void)monitorLogSettingWithExtraInfo:status:;
+ (void)monitorLogSettingVersionWithExtraInfo:;
+ (void)monitorLogLeftEntranceFlagWithExtraInfo:status:;
+ (void)monitorLogActivityInProcessWithExtraInfo:status:;
+ (void)monitorLogTaskInProcessWithExtraInfo:status:;
+ (void)monitorLogGetTaskInfoWithExtraInfo:status:error:;
+ (void)monitorLogReportTaskDoneWithExtraInfo:status:error:;
+ (void)monitorLogNextTaskWithExtraInfo:status:;
+ (void)monitorLogDownloadResourceWithExtraInfo:status:;
+ (void)monitorLogStartTaskWithExtraInfo:;
+ (void)monitorLogFinishTaskWithExtraInfo:;
+ (void)monitorLogClosePendantWithExtraInfo:;
+ (void)monitorLogClickPendantWithExtraInfo:;
+ (void)monitorLogGetLottitWithExtraInfo:status:;
+ (void)monitorLogAnimationWithExtraInfo:;
+ (void)monitorLogShowPendantWithExtraInfo:;
@end
