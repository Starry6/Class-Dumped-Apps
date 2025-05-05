@interface CPLEngineResourceUploadTask : CPLResourceTransferTask
@property (nonatomic) CPLResource cloudResource;
@property (nonatomic) BOOL backgroundTask;
@property (nonatomic) <CPLEngineTransportTask> transportTask;
- (void).cxx_destruct;
- (id)cloudResource;
- (id)transportTask;
- (void)setTransportTask:;
- (void)setCloudResource:;
- (BOOL)isBackgroundTask;
- (void)setBackgroundTask:;
@end
