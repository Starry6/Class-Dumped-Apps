@interface IESLiveVideoGiftQueue : NSObject
@property (nonatomic) NSMutableArray array;
@property (nonatomic) NSObject<OS_dispatch_semaphore> semaphore;
- (id)dequeueAll;
- (void)enqueue_l:;
- (id)init;
- (void)enqueue:;
- (void)dealloc;
- (void)setSemaphore:;
- (id)array;
- (void).cxx_destruct;
- (void)setArray:;
- (id)semaphore;
- (id)dequeue:;
@end
