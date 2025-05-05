@interface CNQueue : NSObject
@property (nonatomic) NSMutableArray buffer;
@property (nonatomic) <CNQueueingStrategy> strategy;
@property (nonatomic) Q count;
@property (nonatomic) NSArray allObjects;
- (id)initWithStrategy:;
- (void)dequeueObject:;
- (id)init;
- (void)enqueue:;
- (id)strategy;
- (id)buffer;
- (id)drain;
- (id)peek;
- (id)dequeue;
- (void)enqueueObjectsFromArray:;
- (void).cxx_destruct;
- (id)allObjects;
- (unsigned long long)count;
+ (id)priorityQueueWithComparator:;
+ (id)boundedQueueWithCapacity:;
+ (id)boundedQueueWithCapacity:overflowHandler:;
@end
