@interface PLCloudInMemoryDownloadTask : NSObject
@property (nonatomic) NSString resourceID;
@property (nonatomic) CPLResourceTransferTask transferTask;
@property (nonatomic) BOOL completed;
@property (nonatomic) NSArray taskIDs;
- (id)resourceID;
- (BOOL)isCompleted;
- (void).cxx_destruct;
- (void)setTransferTask:;
- (id)taskIDs;
- (id)initWithResourceID:taskID:completionHandler:;
- (id)transferTask;
- (void)addClientWithTaskID:completionHandler:;
- (void)cancelClientWithTaskID:;
- (void)reportCompletionWithData:error:;
@end
