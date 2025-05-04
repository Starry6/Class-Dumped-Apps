@interface AWEArrayDataController : AWEBaseDataController
@property (nonatomic) NSArray dataSource;
@property (nonatomic) BOOL refreshHasMore;
@property (nonatomic) BOOL loadmoreHasMore;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL isFiltDuplicate;
- (void)setLoadmoreHasMore:;
- (BOOL)loadmoreHasMore;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)setRefreshHasMore:;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:;
- (BOOL)refreshHasMore;
- (void)fetchForCacheWithCompletion:;
- (void)addDatas:;
- (void)insertData:atIndex:;
- (BOOL)isFiltDuplicate;
- (void)setIsFiltDuplicate:;
- (id)init;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)setDataSource:;
- (id)dataSource;
@end
