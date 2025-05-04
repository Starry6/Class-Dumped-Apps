@interface AWEFansListFilteredDataController : AWEListDataController
@property (nonatomic) q offset;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString uid;
@property (nonatomic) q category;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)paramsForNetworkServiceWithLoadMore:;
- (id)URLForNetworkService;
- (void)toggleCategory:completion:;
- (void)setUid:;
- (long long)category;
- (void)setOffset:;
- (id)uid;
- (long long)offset;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCategory:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)initWithUid:;
@end
