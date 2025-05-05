@interface AWEArrayDataController : AWEBaseDataController
@property (nonatomic) NSArray dataSource;
@property (nonatomic) BOOL refreshHasMore;
@property (nonatomic) BOOL loadmoreHasMore;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL isFiltDuplicate;
- (BOOL)isFiltDuplicate;
- (BOOL)loadmoreHasMore;
- (void)addDatas:;
- (void)fetchForCacheWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)insertData:atIndex:;
- (BOOL)isRequestOnAir;
- (void)loadMoreWithCompletion:;
- (BOOL)refreshHasMore;
- (void)setIsFiltDuplicate:;
- (void)setIsRequestOnAir:;
- (void)setLoadmoreHasMore:;
- (void)setRefreshHasMore:;
- (void)setDataSource:;
- (id)init;
- (id)dataSource;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
