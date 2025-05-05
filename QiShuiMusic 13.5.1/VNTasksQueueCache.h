@interface VNTasksQueueCache : NSObject
@property (nonatomic) q maximumTasksCount;
- (id)init;
- (void).cxx_destruct;
- (void)setMaximumTasksCount:;
- (long long)maximumTasksCount;
- (id)queueWithUniqueAppendix:;
- (id)_queueWithUniqueAppendix:queueClass:;
- (void)releaseQueueWithUniqueAppendix:;
- (void)releaseAllQueues;
+ (id)queueLabelWithUniqueAppendix:;
@end
