@interface AWEGeneralSearchMerchandiseCardListController : AWEListDataController
@property (nonatomic) NSString requestURLString;
@property (nonatomic) NSNumber loadMoreCursor;
@property (nonatomic) NSDictionary requestParams;
@property (nonatomic) NSString searchID;
@property (nonatomic) NSMutableArray hunterCacheKeyArray;
@property (nonatomic) q initialIndex;
@property (nonatomic) NSDictionary logExtra;
- (void)loadMoreWithCompletion:;
- (void)setLogExtra:;
- (id)logExtra;
- (void)initFetchWithCompletion:;
- (id)requestURLString;
- (void)setRequestURLString:;
- (void)setLoadMoreCursor:;
- (id)loadMoreCursor;
- (void)fetchDataWithCompletion:isLoadmore:;
- (void)relateHunterVideoWithAwemeModel:index:logExtra:;
- (id)hunterCacheKeyArray;
- (void)updateLoadMoreParams:;
- (void)setHunterCacheKeyArray:;
- (id)init;
- (void)dealloc;
- (id)initWithURL:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)searchID;
- (void)setSearchID:;
- (id)requestParams;
- (void)setRequestParams:;
- (long long)initialIndex;
- (void)setInitialIndex:;
@end
