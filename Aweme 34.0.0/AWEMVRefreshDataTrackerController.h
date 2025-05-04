@interface AWEMVRefreshDataTrackerController : AWEDCFeedBaseController
- (void)onFetchListDataEndWithReason:response:error:;
- (void)onLoadMoreListDataEndWithReason:response:error:;
+ (id)resultStringWithError:;
@end
