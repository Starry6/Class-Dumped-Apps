@interface TTQueue : NSObject
@property (nonatomic) NSMutableArray array;
@property (nonatomic) q queueSizeMax;
- (long long)getQueueSizeMax;
- (BOOL)enqueue:insertType:;
- (long long)getQueueTaskCount;
- (id)initWhithSize:;
- (long long)queueSizeMax;
- (void)setQueueSizeMax:;
- (id)array;
- (id)dequeue;
- (void).cxx_destruct;
- (void)setArray:;
- (BOOL)isQueueFull;
@end
