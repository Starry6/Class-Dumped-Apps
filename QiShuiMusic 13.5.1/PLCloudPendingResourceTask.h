@interface PLCloudPendingResourceTask : NSObject
- (void)cancelTaskWithIdentifier:;
- (id)lastUpdated;
- (void).cxx_destruct;
- (void)reportProgress:;
- (void)keepAlive;
- (id)initWithProgressBlock:completionHandler:forTaskIdentifier:;
- (void)setTransferTask:;
- (void)addProgressBlock:completionHandler:withTaskIdentifier:;
- (void)reportCompletionWithError:;
- (id)taskIDs;
@end
