@interface CalAsyncBlockQueue : NSObject
@property (nonatomic) <CalAsyncBlockPerformer> blockPerformer;
@property (nonatomic) NSMutableSet pendingBlocks;
- (void)performAfterDelay:block:;
- (void).cxx_destruct;
- (void)performAsync:;
- (id)pendingBlocks;
- (id)initWithBlockPerformer:;
- (void)cancelAllPendingBlocks;
- (id)blockPerformer;
@end
