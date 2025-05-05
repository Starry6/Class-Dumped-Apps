@interface PPXPCClientPipelinedBatchQueryContext : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) @? handleBatch;
- (void)setFinalizeCall:;
- (id)handleBatch;
- (void).cxx_destruct;
- (id)description;
- (void)setQueue:;
- (void)finalizeCallWithSuccess:error:;
- (id)queue;
- (void)setHandleBatch:;
@end
