@interface VNDetectorAsyncTasksQueueCache : VNAsyncTasksQueueCache
+ (id)queueLabelWithUniqueAppendix:;
+ (id)sharedCache;
+ (long long)maximumAllowedTasksInTheQueue;
@end
