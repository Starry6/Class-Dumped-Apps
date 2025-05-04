@interface AWEIMAutoSearchGiphyWarmupManager : NSObject
@property (nonatomic) NSMutableArray warmupKeys;
@property (nonatomic) AWEIMUserMessageHandler handler;
@property (nonatomic) AWEIMAutoSearchGiphyPipelineNode refreshCacheNode;
@property (nonatomic) BOOL didFinishLoadWarmupKeys;
- (id)refreshCacheNode;
- (void)setRefreshCacheNode:;
- (BOOL)didFinishLoadWarmupKeys;
- (id)warmupKeys;
- (void)setDidFinishLoadWarmupKeys:;
- (void)setWarmupKeys:;
- (void)setHandler:;
- (id)handler;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
