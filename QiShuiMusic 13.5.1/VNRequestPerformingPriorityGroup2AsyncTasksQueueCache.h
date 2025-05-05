@interface VNRequestPerformingPriorityGroup2AsyncTasksQueueCache : VNAsyncTasksQueueCache
+ (id)queueLabelWithUniqueAppendix:;
+ (id)sharedCache;
+ (long long)maximumAllowedTasksInTheQueue;
@end
