@interface TSPKThreadPool : NSObject
- (id)init;
- (id)workQueue;
- (id)lowPriorityQueue;
- (void).cxx_destruct;
+ (id)shardPool;
@end
