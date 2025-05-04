@interface AWELiveFeedDataController : AWEListDataController
@property (nonatomic) HTSLiveFeedDataApi feedApi;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)setFeedApi:;
- (id)feedApi;
- (void)p_requestWithType:completion:;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
