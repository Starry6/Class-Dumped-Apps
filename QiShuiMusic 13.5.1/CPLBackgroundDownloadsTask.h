@interface CPLBackgroundDownloadsTask : CPLEngineSyncTask
- (id)taskIdentifier;
- (void)cancel;
- (unsigned long long)_transportTaskCount;
- (void).cxx_destruct;
- (void)launch;
- (id)description;
- (id)initWithEngineLibrary:session:;
- (void)taskDidFinishWithError:;
- (void)_finishTaskLocked;
- (void)_getResourceTypesToDownload:;
- (void)_launchNecessaryDownloadTasksWithTransaction:;
- (BOOL)_isErrorCountingForARetry:;
- (void)_completeBackgroundDownloadForResource:error:withTransaction:;
- (void)_enqueueTasksLocked;
- (void)_updateActiveDownloadTaskCount;
- (unsigned long long)_activeTransferTaskCount;
- (void)_downloadTask:didFinishWithErrorLocked:;
- (void)_transportTaskDidFinish:;
@end
