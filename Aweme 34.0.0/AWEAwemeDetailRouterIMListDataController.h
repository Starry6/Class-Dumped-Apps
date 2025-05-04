@interface AWEAwemeDetailRouterIMListDataController : AWEListDataController
@property (nonatomic) q initialIndex;
@property (nonatomic) q previousIndex;
@property (nonatomic) q moreIndex;
@property (nonatomic) q pageSize;
@property (nonatomic) NSArray itemIDArray;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)loadPreviousWithCompletion:;
- (void)setMoreIndex:;
- (void)setPreviousIndex:;
- (long long)moreIndex;
- (id)itemIDArray;
- (long long)previousIndex;
- (void)setItemIDArray:;
- (id)p_addFakeAwemeIfNeededWithOriginItemIDArray:awemeList:;
- (id)initWithInitialIndex:pageSize:itemIDArray:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (long long)pageSize;
- (void)setPageSize:;
- (long long)initialIndex;
- (void)setInitialIndex:;
@end
