@interface VNRequestPerformingPriorityGroup1AsyncTasksQueueCache : VNAsyncTasksQueueCache
+ (id)queueLabelWithUniqueAppendix:;
+ (id)sharedCache;
+ (long long)maximumAllowedTasksInTheQueue;
@end
