@interface AWEStudioAIGCGeneralAsyncTask : AWEAIAsyncBaseTask
- (void)saveGeneratingDraftWithPublishModel:completion:;
- (id)generatePathWithFileName:taskId:;
- (BOOL)isAssetDownloaded;
- (void)writeTaskStatus:;
- (BOOL)isTaskFinished;
- (void)updateTaskWithGenerationInfo:scene:completion:;
- (void)updateTaskWithTaskInfo:scene:completion:;
- (id)logLabel;
- (id)rootFolder;
@end
