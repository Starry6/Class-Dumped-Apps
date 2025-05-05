@interface CPLInMemoryResourceDownloadTask : CPLResourceTransferTask
@property (nonatomic) @? launchHandler;
@property (nonatomic) @? completionHandler;
@property (nonatomic) CPLResource cloudResource;
@property (nonatomic) CPLPlaceholderRecord cloudRecord;
- (id)launchHandler;
- (void).cxx_destruct;
- (void)launch;
- (id)completionHandler;
- (void)cancelTask;
- (void)associateCloudResource:ofRecord:;
- (id)cloudResource;
- (id)cloudRecord;
- (id)initWithResource:taskIdentifier:launchHandler:completionHandler:;
- (void)finishWithData:error:;
- (void)launchTransportTask:;
+ (id)failedTaskForResource:error:completionHandler:;
@end
