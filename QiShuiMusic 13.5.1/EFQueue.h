@interface EFQueue : NSObject
@property (nonatomic) NSMutableArray buffer;
@property (nonatomic) <EFQueueingStrategy> strategy;
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
- (id)debugDescription;
- (id)dequeue;
- (void).cxx_destruct;
- (void)enqueue:replaceIfExists:;
- (id)description;
- (id)allObjects;
- (unsigned long long)count;
+ (id)priorityQueueWithComparator:;
+ (id)boundedQueueWithCapacity:;
+ (id)boundedQueueWithCapacity:overflowHandler:;
+ (id)bufferedQueueWithCapacity:batchHandler:;
@end
