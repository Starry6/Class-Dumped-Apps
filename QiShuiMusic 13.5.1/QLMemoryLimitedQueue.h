@interface QLMemoryLimitedQueue : NSObject
@property (nonatomic) NSInteger currentTaskCount;
@property (nonatomic) Q currentSize;
- (void)addTask:;
- (unsigned long long)currentSize;
- (void).cxx_destruct;
- (void)executeTask:;
- (id)initWithMaximumMemoryConsumption:maximumConcurrentTasks:;
- (void)dequeueIfPossible;
- (int)currentTaskCount;
@end
