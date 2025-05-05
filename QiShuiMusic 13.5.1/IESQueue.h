@interface IESQueue : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)initWithName:attr:;
- (id)initWithQueue:queueKey:;
- (id)queueKey;
- (void)updateQueuePriority:;
- (id)initWithName:;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
+ (id)sharedQueue;
@end
