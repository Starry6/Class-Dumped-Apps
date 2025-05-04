@interface AWEDCFeedLiveTrimController : AWEDCFeedBaseController
- (void)containerCollectionView:willDisplayCell:forItemAtIndexPath:;
- (void)onFetchListDataEndWithReason:response:error:;
- (void)onLoadMoreListDataEndWithReason:response:error:;
- (id)classNameWithReferString;
@end
