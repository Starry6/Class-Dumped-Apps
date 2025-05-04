@interface AWEDPlayletUserProfileTabDataController : AWEListDataController
@property (nonatomic) q count;
@property (nonatomic) NSString userID;
@property (nonatomic) NSDictionary requestParams;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)initWithUserID:;
- (BOOL)canLoadMore;
- (void)reloadWithPullType:Completion:;
- (void)requestWithMaxRetryTimes:params:cursor:count:completion:;
- (id)userID;
- (void)setCount:;
- (long long)count;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)setUserID:;
- (id)requestParams;
- (void)setRequestParams:;
@end
