@interface VNDetectorSyncTasksQueueCache : VNSyncTasksQueueCache
+ (id)queueLabelWithUniqueAppendix:;
+ (id)sharedCache;
+ (long long)maximumAllowedTasksInTheQueue;
@end
