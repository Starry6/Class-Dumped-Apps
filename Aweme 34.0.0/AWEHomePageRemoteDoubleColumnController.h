@interface AWEHomePageRemoteDoubleColumnController : AWEHomePageRemoteCommonController
- (id)atomicDataModel;
- (void)homePageRemotePanelWillShow;
- (BOOL)canShowCellView;
- (void)homePageRemoteCellClick;
- (BOOL)needLoadController;
- (void)routeToFeedDoubleColumn;
- (void)routeToFeed;
@end
