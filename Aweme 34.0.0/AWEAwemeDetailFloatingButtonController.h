@interface AWEAwemeDetailFloatingButtonController : AWEAwemeNewDetailBaseController
- (void)onScrollViewWillBeginDragging:;
- (id)currentDisplayingAweme;
- (void)viewDidLoadAfterTableviewSetup;
- (void)onScrollDidEndWithIndexPath:;
- (void)detailCellViewController:awemeModel:playerPlayTime:canPlayTime:totalTime:;
- (void)viewWillBeginCoordinatorTransitionAnimation:;
- (id)aAWEPadDetailTableViewPlayControlCenterAdapter;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:;
- (void)tableView:didEndDisplayingCell:forRowAtIndexPath:;
- (id)currentInteractionController;
+ (Class)aAWEPadDetailTableViewPlayControlCenterAdapterClass;
@end
