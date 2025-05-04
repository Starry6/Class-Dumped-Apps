@interface AWEFamiliarDetailController : AWEAwemeNewDetailBaseController
- (void)initialFetchCompletion:error:;
- (void)loadMoreCompletion:error:isFooterRefreshing:;
- (void)loadMoreCompletionWithData:;
- (void)setViewControllerState;
- (void)viewDidAppear:;
@end
