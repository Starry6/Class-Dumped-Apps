@interface AWEUserDynamicDataController : AWEListDataController
@property (nonatomic) NSNumber minCursor;
@property (nonatomic) NSNumber maxCursor;
@property (nonatomic) NSMutableDictionary filteredToRaw;
@property (nonatomic) NSMutableDictionary rawToFiltered;
@property (nonatomic) NSString userID;
@property (nonatomic) BOOL isCurrentUser;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)calculateFilteredDataSource;
- (long long)dataSourceIndexFromFilteredIndex:;
- (long long)filteredDataSourceIndexFromIndex:;
- (id)minCursor;
- (id)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (id)initWithUserID:;
- (BOOL)canLoadMore;
- (void)reloadWithPullType:Completion:;
- (void)setFilteredToRaw:;
- (void)setRawToFiltered:;
- (id)filteredToRaw;
- (id)rawToFiltered;
- (id)_transformReponseToConcernModel:model:;
- (id)userID;
- (void)removeAll;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)setUserID:;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:;
@end
