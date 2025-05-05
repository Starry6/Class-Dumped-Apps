@interface NAQueue : NSObject
@property (nonatomic) Q count;
@property (nonatomic) NSArray allObjects;
- (id)initWithStrategy:;
- (void)dequeueObject:;
- (id)init;
- (void)enqueue:;
- (id)drain;
- (id)peek;
- (id)dequeue;
- (void).cxx_destruct;
- (id)allObjects;
- (unsigned long long)count;
+ (id)priorityQueueWithComparator:;
+ (id)boundedQueueWithCapacity:;
+ (id)boundedQueueWithCapacity:overflowHandler:;
@end
