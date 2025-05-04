@interface AWEAwemeDetailCommonDataController : AWEListDataController
@property (nonatomic) NSString requestURLString;
@property (nonatomic) NSNumber refreshCursor;
@property (nonatomic) NSNumber loadMoreCursor;
@property (nonatomic) q pageSize;
@property (nonatomic) NSArray filterAwemeTypes;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)requestURLString;
- (void)setRequestURLString:;
- (void)setLoadMoreCursor:;
- (id)loadMoreCursor;
- (void)setRefreshCursor:;
- (id)refreshCursor;
- (void)trackHotAuthorMonitorIfNeeded:error:;
- (id)awemesByFilterAwmeTypes:;
- (id)filterAwemeTypes;
- (void)fetchDataWithCompletion:isLoadmore:;
- (void)setFilterAwemeTypes:;
- (id)init;
- (id)initWithURL:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (long long)pageSize;
- (void)setPageSize:;
+ (void)p_mutableURL:deleteQueryItem:;
@end
