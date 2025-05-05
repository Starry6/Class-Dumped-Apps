@interface CalCancelableDispatchBlock : NSObject
@property (nonatomic) @? block;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)block;
- (void)cancel;
- (void).cxx_destruct;
- (void)setBlock:;
- (id)queue;
- (void)performAfterDelay:;
- (id)initWithBlock:inQueue:;
- (void)performAsync;
@end
