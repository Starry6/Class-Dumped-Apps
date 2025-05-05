@interface FMQueueSynchronizer : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (void).cxx_destruct;
- (void)conditionalSync:;
- (void)setQueue:;
- (id)initWithQueue:;
- (id)queue;
@end
