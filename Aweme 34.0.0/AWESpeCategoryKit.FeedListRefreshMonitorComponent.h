@interface AWESpeCategoryKit.FeedListRefreshMonitorComponent : AWESpeCategoryKit.FeedListBaseComponent
- (void)onFetchListDataStartWithReason:;
- (void)onFetchListDataEndWithReason:success:response:error:;
- (void)onLoadMoreListDataEndWithReason:success:response:error:;
- (id)init;
@end
