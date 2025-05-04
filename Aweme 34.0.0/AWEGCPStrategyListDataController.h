@interface AWEGCPStrategyListDataController : AWEListDataController
@property (nonatomic) <AWEGCPStrategyDataManager> dataManager;
@property (nonatomic) IESGCPPlayerTransitionContext context;
- (void)initFetchWithCompletion:;
- (void)loadMoreWithFilteredCompletion:;
- (void)replaceVideosWithCompletion:replaceVideosType:;
- (void)fetchForCacheWithCompletion:;
- (id)getModelsWithStrategyArray:;
- (id)initWithDataManager:;
- (id)dataManager;
- (void)setDataManager:;
- (void)setContext:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)context;
@end
