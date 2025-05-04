@interface AWESpeCategoryKit.FeedListLoadMoreMonitorComponent : AWESpeCategoryKit.FeedListBaseComponent
- (void)onLoadMoreListDataStartWithReason:;
- (void)onFetchListDataEndWithReason:success:response:error:;
- (void)onLoadMoreListDataEndWithReason:success:response:error:;
- (id)init;
@end
