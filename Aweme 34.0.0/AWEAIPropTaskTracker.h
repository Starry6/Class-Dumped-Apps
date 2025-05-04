@interface AWEAIPropTaskTracker : NSObject
+ (id)trackEnterFrom;
+ (void)monitorDraftWithTaskId:propId:AIType:totalDuration:draftType:type:statusCode:errorCode:errorMessage:;
+ (void)monitorSubmitSuccessRateWithTaskId:propId:AIType:totalDuration:statusCode:;
+ (void)monitorDraftWithTaskId:propId:aigcType:aigcCreateWay:;
+ (void)monitorAIPropGenerateSuccessWithTaskId:propId:AIType:actionType:totalDuration:statusCode:errorCode:errorMessage:;
+ (void)monitorDownloadWithTaskId:propId:AIType:actionType:totalDuration:duration:errorCode:errorMessage:extraParam:;
+ (void)monitorAIPropDeleteTasksWithPendingCount:failedCount:aiTypes:prodList:;
+ (void)monitorAIPropNoticeClickWithTaskId:propId:AIType:statusCode:errorCode:errorMessage:completed:fromDraft:totalDuration:;
+ (void)monitorAIPropPersistantTaskInfoWithTaskCount:statusCode:AIType:taskIds:tasksStatus:;
+ (void)trackInnerPushWithPropId:aiType:actionType:chatType:;
+ (void)trackClickAIGCGenerateFeedCardWithTaskId:propId:clickType:;
+ (void)trackShowAIGCGenerateFeedCardWithTaskId:propId:;
+ (void)monitorQueryResponseWithTaskId:propId:totalDuration:complete:errorCode:errorMessage:;
+ (void)trackAIGCCameraCompositeResponseWithTaskId:propId:AIType:duration:statusCode:;
+ (void)monitorServerPushMessageWithTaskId:propId:totalDuration:statusCode:errorCode:errorMessage:;
+ (void)monitorInnerPushWithTaskId:propId:AIType:actionType:totalDuration:statusCode:;
+ (void)monitorAIGCQueryTaskListWithCount:actionType:duration:statusCode:errorCode:errorMessage:extraParam:;
+ (void)monitorAIPropCancelTasksWithStatusCode:AIType:taskIds:duration:errorCode:errorMsg:;
@end
