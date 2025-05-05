@interface PLCloudInMemoryTaskManager : NSObject
- (id)init;
- (id)_identifierForResource:;
- (void)cancelTaskWithTaskIdentifier:;
- (void)setTransferTask:forResource:;
- (void)reportCompletionForResource:withData:error:;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)addClientHandlerAndCreateTaskIfNecessaryForResource:taskIdentifier:completionHandler:;
@end
