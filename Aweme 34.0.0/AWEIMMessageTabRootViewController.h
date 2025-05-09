@interface AWEIMMessageTabRootViewController : UIViewController
@property (nonatomic) UIViewController currentPanGestureTargetVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString awe_padUITrackerPageEnterFrom;
@property (nonatomic) BOOL awe_padUITrackerIgnoreStayTime;
@property (nonatomic) AWEIMSharedViewControllerInstanceRouterAction lastRouterAction;
- (void)transition_didPopDoneTransitionWithContext:;
- (BOOL)configWithRouterParamDict:;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:gestureRecognizer:;
- (void)transition_didStartTransitionWithContext:;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (void)awe_themeReload;
- (id)transition_destinatedViewControllerForSlideDirection:gestureRecognizer:;
- (BOOL)transition_shouldStartInteractiveTranstionToVC:;
- (unsigned long long)transition_destinatedType;
- (void)transition_didCancelPercentDrivenTransitionWithContext:;
- (void)tabBarItemViewControllerDidSelectFromPreviousIndex:;
- (void)tabBarItemViewControllerDidUnselect;
- (void)tabBarItemViewControllerDidDoubleTap;
- (void)awe_scrollToTop;
- (id)awe_padUITrackerPageEnterFrom;
- (BOOL)usingFadingAnimation;
- (void)loadIMView;
- (void)setLastRouterAction:;
- (void)p_markPushLandingTabTrackInfoWithParamDict:;
- (id)currentPanGestureTargetVC;
- (void)setCurrentPanGestureTargetVC:;
- (id)lastRouterAction;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (void)loadView;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (BOOL)hidesBottomBarWhenPushed;
- (id)messageController;
@end
