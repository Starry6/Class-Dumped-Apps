@interface AWECommerceTaskQueue : NSObject
@property (nonatomic) NSMutableArray array;
- (void)enqueueElementsFromQueue:filter:;
- (void)enqueueElementFromQueue:filter:;
- (BOOL)remove:;
- (id)init;
- (id)array;
- (id)dequeue;
- (void)setArray:;
- (BOOL)isEmpty;
- (long long)size;
- (void).cxx_destruct;
- (void)enqueue:;
@end
