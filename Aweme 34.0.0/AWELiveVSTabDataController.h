@interface AWELiveVSTabDataController : AWEListDataController
@property (nonatomic) AWELiveVSTabApi vsTabApi;
@property (nonatomic) HTSLiveFeedDataApi vsFeedApi;
@property (nonatomic) q cursor;
@property (nonatomic) q offset;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)vsTabApi;
- (id)vsFeedApi;
- (id)fetchFeedParams;
- (void)setVsTabApi:;
- (void)setVsFeedApi:;
- (long long)cursor;
- (id)init;
- (void)setOffset:;
- (long long)offset;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
