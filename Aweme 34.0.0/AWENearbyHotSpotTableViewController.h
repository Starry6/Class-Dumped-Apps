@interface AWENearbyHotSpotTableViewController : UIViewController
@property (nonatomic) AWEShellViewController<AWEAwemeDetailTableViewControllerProtocol><AWEAwemeNewDetailTableContainerProtocol><AWEAwemeDetailTableVCComposableProtocol> detailVC;
@property (nonatomic) AWENearbyHotSpotTopTitleView topTitleView;
@property (nonatomic) AWENearbyHotSpotBottomView bottomView;
@property (nonatomic) AWENearbyHotSpotProgressView progressView;
@property (nonatomic) AWENearbyHotSpotTableViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentAwemeModel;
- (BOOL)configWithRouterParamDict:;
- (BOOL)detailTableViewControllerNeedUpdateBottomBarWhenReload:;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:gestureRecognizer:;
- (void)transition_didStartTransitionWithContext:;
- (BOOL)transition_gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)onScrollViewWillBeginDragging:;
- (id)transition_destinatedViewControllerForSlideDirection:gestureRecognizer:;
- (BOOL)transition_enableCustomActionForSlideDirection:gestureRecognizer:;
- (void)transition_performCustomActionForSlideDirection:gestureRecognizer:;
- (void)transition_didCancelPercentDrivenTransitionWithContext:;
- (unsigned long long)bizType;
- (void)onScrollDidEndWithIndexPath:;
- (void)onScrollWillChangeVideo:index:directTop:;
- (void)onScrollBackToIndex:;
- (id)detailVC;
- (void)setDetailVC:;
- (id)bottomBarCoordinator;
- (void)shakeOnChangeHotPoint;
- (void)fastSwitchNextHotSpot;
- (void)actionClicked;
- (void)configDetailVC;
- (id)topTitleView;
- (void)setTopTitleView:;
- (void)loadMoreNearbyHotSpot;
- (void)didRequestCompleteWithPullType:success:models:;
- (void)updateProgressUIWithCurrentModel:isScroll:;
- (void)changeToNewHotSpotModel:isScrolled:;
- (id)createBottomBarContextBlock;
- (id)currentHotSpotModel;
- (void)viewWillDisappear:;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (id)progressView;
- (id)viewModel;
- (void)viewDidLoad;
- (id)tableView;
- (void)viewDidDisappear:;
- (void)setProgressView:;
- (void)viewWillAppear:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)context;
- (id)bottomView;
- (id)currentInteractionController;
- (void)setupUI;
- (void)setBottomView:;
- (id)dataController;
@end
