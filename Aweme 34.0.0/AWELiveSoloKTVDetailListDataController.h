@interface AWELiveSoloKTVDetailListDataController : AWEListDataController
@property (nonatomic) AWELiveSoloKTVDetailApi api;
@property (nonatomic) q fetchTimes;
@property (nonatomic) q fetchCount;
@property (nonatomic) NSDictionary additionalRequestParams;
- (void)setLoadmoreHasMore:;
- (BOOL)loadmoreHasMore;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)loadMoreWithFilteredCompletion:;
- (id)commonRequestParams;
- (long long)fetchTimes;
- (void)setFetchTimes:;
- (void)fetchAwemeListWithCompletion:;
- (id)init;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)copyWithZone:;
- (id)api;
- (long long)fetchCount;
- (void)setFetchCount:;
- (id)additionalRequestParams;
- (void)setAdditionalRequestParams:;
- (void)setApi:;
@end
