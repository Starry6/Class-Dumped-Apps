@interface CalDispatchQueueAsyncBlockPerformer : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)performAfterDelay:block:;
- (void).cxx_destruct;
- (id)initWithQueue:;
- (id)performAsync:;
- (id)queue;
@end
