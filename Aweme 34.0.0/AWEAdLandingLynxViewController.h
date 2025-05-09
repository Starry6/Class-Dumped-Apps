@interface AWEAdLandingLynxViewController : UIViewController
@property (nonatomic) AWEBDARifleViewController lynxViewController;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWEAdPanelNavigationBar navigationBar;
@property (nonatomic) AWEAdPanelBottomNavigationBar bottomNavigationBar;
@property (nonatomic) NSNumber lastContentOffset;
@property (nonatomic) BOOL lockVerticalContentOffset;
@property (nonatomic) q phase;
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) AWEAdWebViewController webViewController;
@property (nonatomic) <UIScrollViewDelegate> lynxScrollViewDelegate;
@property (nonatomic) BOOL isBottomNavigationShowing;
@property (nonatomic) UIView<IESWebViewProtocol> webView;
@property (nonatomic) AWEAdLandingTrackEvents trackEvents;
@property (nonatomic) <AWEPageSheetUIModifyDelegate> pageSheetUIDelegate;
@property (nonatomic) AWEPageSheetPresentationNavigationController navigationContainer;
@property (nonatomic) AWEAdLandingLynxPageContext lynxPageContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isPreviewEnabled;
@property (nonatomic) AWEAdTaskContext context;
- (void)closeButtonAction:;
- (void)handleCloseWebViewBlock;
- (long long)initialPhaseForPageSheetPresentation:;
- (void)pageSheetPresentationWillBegin:;
- (BOOL)pageSheet:shouldDismissForReason:;
- (void)pageSheetDidHorizontalPan:;
- (unsigned long long)phaseTransitionStyleForPageSheetPresentation:;
- (id)pageSheetPresentation:frameOfPresentedViewForPhase:;
- (void)pageSheetPresentation:didTransitionToPhase:;
- (id)trackEvents;
- (void)setLynxViewController:;
- (id)lynxViewController;
- (void)reportButtonClicked;
- (void)rifleViewControllerDidFinishLoad:;
- (void)rifleViewController:didReceiveFirstLoad:;
- (void)rifleViewController:loadFailedWithErrorInfo:;
- (void)rifleViewControllerDidClose:;
- (void)setLynxPageContext:;
- (void)setIsPreviewEnabled:;
- (void)setNavigationContainer:;
- (id)lynxPageContext;
- (void)updateNavigationButtonStatus;
- (BOOL)shouldShowBothNavigationStyle;
- (void)handlePageSheetPresentationNotification:;
- (void)setUpTrackEventsWithAweme:;
- (void)setUpBottomNavigationBarIfNeeded;
- (id)bottomNavigationBar;
- (void)tapWeb:;
- (void)registerLynxBridge;
- (void)trackPageView;
- (void)setTrackEvents:;
- (void)setBottomNavigationBar:;
- (long long)imageWithRenderingMode;
- (BOOL)shouldSupportDarkMode;
- (void)backButtonAction:;
- (void)forwardButtonAction:;
- (void)reportButtonAction:;
- (long long)adapter_imageWithRenderingMode;
- (void)updateBottomNavigation;
- (void)animateInBottomNavigation;
- (BOOL)lockVerticalContentOffset;
- (void)animateOutBottomNavigation;
- (void)setLockVerticalContentOffset:;
- (void)trackDraggingDownDismissal;
- (void)trackDraggingRightDismissal;
- (void)trackTappingDismissal;
- (void)trackButtonDismissal;
- (void)trackReportButton;
- (BOOL)isBottomNavigationShowing;
- (void)setIsBottomNavigationShowing:;
- (void)setPageSheetUIDelegate:;
- (id)pageSheetUIDelegate;
- (id)navigationContainer;
- (id)lynxScrollViewDelegate;
- (void)setLynxScrollViewDelegate:;
- (void)setModel:;
- (id)navigationBar;
- (id)init;
- (void)setScrollView:;
- (void)setWebView:;
- (long long)phase;
- (void)viewDidLoad;
- (id)webView;
- (id)scrollView;
- (void)scrollViewDidScroll:;
- (id)model;
- (void)scrollViewWillBeginDragging:;
- (void)setContext:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
- (void)viewDidAppear:;
- (id)context;
- (void)setPhase:;
- (void)setNavigationBar:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)lastContentOffset;
- (void)setLastContentOffset:;
- (void)updateBackButton;
- (void)setUpNavigationBar;
- (BOOL)isPreviewEnabled;
- (id)webViewController;
- (void)setWebViewController:;
+ (BOOL)shouldShowBothNavigationStyleWithModel:;
+ (id)convertInfoWithAwemeModel:lynxComponent:;
+ (BOOL)openAdLandingLynxViewControllerWithContext:;
+ (BOOL)isBackGroundVideoPlayingInFeedSceneWithViewController:;
@end
