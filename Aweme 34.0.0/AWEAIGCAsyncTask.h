@interface AWEAIGCAsyncTask : AWEAIAsyncBaseTask
- (void)saveGeneratingDraftWithPublishModel:completion:;
- (void)handleGeneratedNoticeClickBeforeTaskBatchProcessFinish:completion:;
- (id)generatePathWithFileName:taskId:;
- (BOOL)isAssetDownloaded;
- (void)writeTaskStatus:;
- (void)trackAIGCCameraCompositeResponseWithDuration:errorCode:errorMessage:;
- (BOOL)isTaskFinished;
- (void)updateTaskWithGenerationInfo:scene:completion:;
- (void)trackAIGCCameraCompositeResponseSucceedWithScene:;
- (void)saveGeneratedDraftCompletion:;
- (void)startDownloadingWithScene:completion:;
- (void)p_trackDownImageWithDuration:isSucceeded:scene:errorMessage:;
- (id)logLabel;
- (id)rootFolder;
@end
