@interface PLCloudTaskManager : NSObject
- (id)init;
- (BOOL)addProgressBlock:completionHandler:forResourceIdentifier:highPriority:withTaskIdentifier:;
- (void)cancelTaskWithTaskIdentifier:completion:;
- (void)reportCompletionForResourceIdentifier:highPriority:withError:;
- (id)_taskIdentifiersForResourceIdentifier:highPriority:;
- (id)_taskForResourceIdentifier:highPriority:;
- (void).cxx_destruct;
- (void)reset;
- (void)_setTaskIdentifiers:forResourceIdentifier:highPriority:;
- (void)reportProgress:forResourceIdentifier:highPriority:;
- (void)_removeTaskIdentifiersForResourceIdentifier:highPriority:;
- (id)getPendingTaskForTaskIdentifier:;
- (void)setPendingTaskWithTransferTask:withTaskIdentifier:;
@end
