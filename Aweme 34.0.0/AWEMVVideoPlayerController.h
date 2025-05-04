@interface AWEMVVideoPlayerController : AWEDCFeedBaseController
- (void)detailTableViewControllerWillExit:currentAwemeModel:;
- (void)cancelRefresh;
- (void)containerViewDidAppear:;
- (void)containerViewDidDisappear:;
- (void)containerCollectionView:startDidSelectItemAtIndexPath:;
- (void)onFetchListDataEndWithReason:response:error:;
- (id)mvPageContext;
- (void)scrollActiveViewToVisibleIfNeeded;
- (void)containerViewDidLoad;
@end
