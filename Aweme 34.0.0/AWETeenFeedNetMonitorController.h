@interface AWETeenFeedNetMonitorController : AWETeenFeedBaseController
- (BOOL)enableSwitchNetMain;
- (void)beginLoadMore;
- (void)loadMoreCompletion:error:isFooterRefreshing:;
@end
