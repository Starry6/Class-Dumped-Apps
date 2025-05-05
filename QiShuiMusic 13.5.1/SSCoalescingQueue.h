@interface SSCoalescingQueue : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSObject<OS_dispatch_source> source;
- (id)initWithBlock:;
- (void)executeBlock;
- (void).cxx_destruct;
- (id)source;
- (void)setQueue:;
- (id)queue;
- (void)setSource:;
@end
