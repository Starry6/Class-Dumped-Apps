@interface AWEEcomSearchOrderSearchListDataController : AWEListDataController
@property (nonatomic) NSDictionary loadMoreInfo;
@property (nonatomic) NSNumber loadMoreCursor;
@property (nonatomic) q initialIndex;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)loadMoreInfo;
- (void)setLoadMoreInfo:;
- (void)setLoadMoreCursor:;
- (id)loadMoreCursor;
- (void)loadMoreInSelfWithCompletion:isLoadmore:;
- (id)initWithLoadMoreInfo:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (long long)initialIndex;
- (void)setInitialIndex:;
@end
