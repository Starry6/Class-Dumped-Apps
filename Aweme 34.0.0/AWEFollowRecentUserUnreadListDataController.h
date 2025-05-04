@interface AWEFollowRecentUserUnreadListDataController : AWEListDataController
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q offset;
@property (nonatomic) NSNumber level;
@property (nonatomic) NSNumber scene;
@property (nonatomic) BOOL needTotal;
@property (nonatomic) NSNumber firstRefreshTotalCount;
@property (nonatomic) NSString insertIds;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)insertIds;
- (void)setInsertIds:;
- (void)loadDataWithCompletion:pullType:;
- (BOOL)needTotal;
- (void)setFirstRefreshTotalCount:;
- (void)setNeedTotal:;
- (id)firstRefreshTotalCount;
- (void)setLevel:;
- (void)setScene:;
- (void)setOffset:;
- (id)level;
- (id)scene;
- (long long)offset;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
