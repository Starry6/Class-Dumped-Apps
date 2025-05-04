@interface AWEFansPushForwardDataController : AWEListDataController
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q total;
@property (nonatomic) NSArray liveTagEnabledIndexArray;
- (void)loadMoreWithCompletion:;
- (id)getParams;
- (id)p_generateLiveTagEnableIndexArray;
- (void)setLiveTagEnabledIndexArray:;
- (id)liveTagEnabledIndexArray;
- (id)cursor;
- (id)init;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (long long)total;
- (void)setTotal:;
@end
