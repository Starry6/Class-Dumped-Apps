@interface AWEPublishStageOperationScheduler : NSObject
@property (nonatomic) NSOperationQueue opQueue;
@property (nonatomic) NSMutableDictionary stageOpMap;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) AWEPublishBaseTask host;
@property (nonatomic) BOOL suspended;
- (BOOL)containsOperation:stageIndex:;
- (id)firstExecutingOperaion;
- (id)getKeyWithType:stageIndex:;
- (id)stageOpMap;
- (id)getKeyWithOperation:;
- (void)p_observeOp:;
- (void)setStageOpMap:;
- (void)cancelAllOperations;
- (void)setHost:;
- (id)host;
- (void)setSuspended:;
- (id)init;
- (void)dealloc;
- (void)setOpQueue:;
- (void)addOperation:;
- (void)setQueue:;
- (id)opQueue;
- (void).cxx_destruct;
- (id)queue;
- (BOOL)isSuspended;
@end
