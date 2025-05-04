@interface AWEAnchorMediumDataController : AWEListDataController
@property (nonatomic) q recommendCursor;
@property (nonatomic) q searchCursor;
@property (nonatomic) BOOL recommendHasMore;
@property (nonatomic) BOOL searchHasMore;
@property (nonatomic) NSArray recommendGameDataSource;
@property (nonatomic) NSArray searchGameDataSource;
- (BOOL)searchHasMore;
- (void)setSearchHasMore:;
- (void)refreshRecommendDataWithCompletion:;
- (void)refreshSearchDataithKeword:completion:;
- (void)fetchRecommendGameDataSourceWithCursor:count:completion:;
- (void)fetchSearchGameDataSourceWithKeyword:cursor:count:completion:;
- (long long)recommendCursor;
- (long long)searchCursor;
- (void)setRecommendCursor:;
- (void)setRecommendHasMore:;
- (void)setRecommendGameDataSource:;
- (id)recommendGameDataSource;
- (void)setSearchCursor:;
- (void)setSearchGameDataSource:;
- (id)searchGameDataSource;
- (void)initFetchRecommendDataWithCompletion:;
- (void)initFetchSearchDataWithKeword:completion:;
- (void)loadMoreRecommendDataWithCompletion:;
- (void)loadMoreSearchDataWithKeword:completion:;
- (BOOL)recommendHasMore;
- (void).cxx_destruct;
@end
