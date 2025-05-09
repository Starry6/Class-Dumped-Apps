@interface AWEAdCustomHeaderWebViewController : AWEAdCommentBaseViewController
@property (nonatomic) AWEAdWebViewController webViewController;
@property (nonatomic) AWEBDARifleViewController lynxViewController;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) UIPanGestureRecognizer topCardPanGesture;
@property (nonatomic) AWEAdCustomHeaderWebViewTopCard topCard;
@property (nonatomic) AWEAdCustomHeaderWebViewNaviBar naviBar;
@property (nonatomic) NSString barType;
@property (nonatomic) double naviBarHeight;
@property (nonatomic) double topCardHeight;
@property (nonatomic) double topCardHeightDiff;
@property (nonatomic) BOOL isUserSliding;
@property (nonatomic) double canScrollDisdance;
@property (nonatomic) double topCardShowHeight;
@property (nonatomic) double containerViewOriginFrame;
@property (nonatomic) UIView containerView;
@property (nonatomic) BOOL isWebViewVerticalScollBlocked;
@property (nonatomic) AWEAdFeedCommentViewController commentViewController;
@property (nonatomic) DUXTabBarContainerController tabBarContainer;
@property (nonatomic) DUXTabBar tabBar;
@property (nonatomic) q tabBarSelectedIndex;
@property (nonatomic) <AWEAdLandingPageProtocol> finalDisplayedController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)commentViewController;
- (void)setCommentViewController:;
- (long long)numberOfControllers:;
- (id)slidingViewController:viewControllerAtIndex:;
- (void)slidingViewController:didSelectIndex:;
- (id)initWithAwemeModel:;
- (void)trackShow;
- (id)tabBarContainer;
- (void)setTabBarContainer:;
- (void)setBarType:;
- (void)setNaviBarHeight:;
- (double)naviBarHeight;
- (void)onAWEUIThemeChangeNotification;
- (void)setupContainerViewAndFrame;
- (void)setupLynxViewControllerIfNeed;
- (void)setupWebViewController;
- (void)setupTabBarContainer;
- (void)setupTopBarWithBarType:;
- (void)setupNaviBar;
- (void)updateSubViewFollowedCompletion;
- (void)startFetchUserModel;
- (void)setTabBarSelectedIndex:;
- (id)finalDisplayedController;
- (void)adCommentTrack:event:refer:;
- (BOOL)shouldShowLynxContentWithSmallBarType;
- (void)setLynxViewController:;
- (id)lynxViewController;
- (void)setFinalDisplayedController:;
- (double)topCardHeight;
- (double)topCardHeightDiff;
- (id)topCard;
- (void)setCanScrollDisdance:;
- (id)naviBar;
- (void)reportButtonTapped:;
- (void)updateSubViewFollowButton;
- (id)topCardPanGesture;
- (BOOL)checkShowRetain;
- (BOOL)isUserSliding;
- (void)blockContentOffsetAtVerticalZero:;
- (BOOL)isWebViewVerticalScollBlocked;
- (void)setIsUserSliding:;
- (void)setContainerViewOriginFrame:;
- (double)containerViewOriginFrame;
- (void)setIsWebViewVerticalScollBlocked:;
- (void)updateContainerFrame:;
- (void)updateNaviBarContentAlpha;
- (double)canScrollDisdance;
- (void)setTopCardPanGesture:;
- (long long)tabBarSelectedIndex;
- (void)rifleViewController:loadFailedWithErrorInfo:;
- (void)setTopCard:;
- (void)setNaviBar:;
- (void)setTopCardHeight:;
- (void)setTopCardHeightDiff:;
- (double)topCardShowHeight;
- (void)setTopCardShowHeight:;
- (void)handlePan:;
- (id)barType;
- (void)dealloc;
- (void)viewDidLoad;
- (id)containerView;
- (void)scrollViewDidScroll:;
- (void)scrollViewWillBeginDragging:;
- (void)setContainerView:;
- (unsigned long long)currentState;
- (id)tabBar;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)setTabBar:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)webViewController;
- (void)backButtonTapped:;
- (void)setWebViewController:;
+ (id)adCustomHeaderWebViewControllerWithAwemeModel:;
+ (BOOL)canShowAdCustomHeaderWebViewControllerWithAwemeModel:;
@end
