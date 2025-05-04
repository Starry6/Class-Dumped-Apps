@interface AWEPublishTaskFlowHandle : NSObject
@property (nonatomic) AWEPublishBaseTask task;
@property (nonatomic) BOOL willDismiss;
- (void)setWillDismiss:;
- (void)removePreUploadingTask;
- (void)cancelPreUploadingTask;
- (void)removePreUploadingTask:;
- (void)removePreUploadingTaskForPreview;
- (void)publishPageStayBegin;
- (void)startPreFlowWithPreUpload:preMerge:extraInfo:willExecuteBlock:;
- (void)saveDraftWithDraftType:feedback:showSuccessToast:completion:;
- (void)enqueueTaskWithWillInfo:;
- (void)configWithUploadParasms:logDict:;
- (BOOL)isTaskSupportPrePublish;
- (id)prePublishTrackCommonParams;
- (id)initWithTask:;
- (void)setTask:;
- (id)task;
- (void).cxx_destruct;
- (BOOL)willDismiss;
- (unsigned long long)flowType;
- (void)timerStart;
@end
