@interface AWEECMultiMallContainerController : UIViewController
@property (nonatomic) BOOL isVisible;
@property (nonatomic) AWEECMultiMallContainerView containerView;
@property (nonatomic) IESECLynxCard searchView;
@property (nonatomic) AWEECMallCategoryView categoryView;
@property (nonatomic) IESECMallSlidingViewController slidingVC;
@property (nonatomic) AWEECMultiMallClipBGView bgView;
@property (nonatomic) AWEECMultiMallContainerModel containerModel;
@property (nonatomic) AWEECMultiMallEnterModel coldLandingEnterModel;
@property (nonatomic) AWEECNewEntranceRollBackHandler rollBackHandler;
@property (nonatomic) @? bottomRefreshBlock;
@property (nonatomic) BOOL isTapLaunch;
@property (nonatomic) AWEECPopupDelegateWrapper popupDelegateWrapper;
@property (nonatomic) BDXBridgeEventSubscriber subscriber;
@property (nonatomic) double lastSearchHeight;
@property (nonatomic) BOOL hasFinishRealRender;
@property (nonatomic) BOOL hasSendedCategoryShow;
@property (nonatomic) <AWEECMultiMallContainerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)numberOfControllers:;
- (id)slidingViewController:viewControllerAtIndex:;
- (void)slidingViewController:didSelectIndex:;
- (void)slidingViewController:didFinishTransitionFromPreviousIndex:currentIndex:transitionType:;
- (void)slidingViewControllerDidScroll:;
- (void)trackEvent:params:;
- (BOOL)mallIsVisible;
- (void)mallGetCardPosition:completion:;
- (void)appResignActive;
- (void)appBecomeActive;
- (id)commonTrackParams;
- (void)clearMemory;
- (id)containerModel;
- (void)viewDidFirstScreen:;
- (void)setContainerModel:;
- (id)slidingVC;
- (void)slidingViewControllerWillBeginDragging:;
- (void)slidingViewController:willFinishTransitionFromPreviousIndex:currentIndex:transitionType:;
- (void)slidingViewControllerDidEndScroll:;
- (void)setSlidingVC:;
- (void)requestClientAiPrefetchApis:message:completion:;
- (void)mallChannelInnerTheme:;
- (void)mallChannelTransInfo:;
- (BOOL)refreshIfNeededComplete:;
- (void)enterMallWithParams:;
- (void)homepageWillRelaunched;
- (id)aAWEECMultiMallDOUYINLGAdapter;
- (void)updateXBridgeHandler:;
- (void)updatePageXBridges:;
- (void)homepageWillStraightOutHalfPage:;
- (void)resetUserInteract:;
- (id)getCurrentTrackParams;
- (void)homepageDidFinishRender;
- (void)updateHomePageCategoryListModel:;
- (void)updateHomePageCard:;
- (void)updateHomeWhiteBoard:;
- (id)getMultiSelectedTabBridgeHandler;
- (void)updatePopupManager:taskDelegate:;
- (void)updateHomePopupLayer:;
- (id)getMultiTabsTargetViewWithID:;
- (void)updateHomePageSkinModel:;
- (void)innerFloatLayoutUpdated:;
- (id)getCurrentGlobalContext;
- (id)currentContainerResponder;
- (BOOL)getMultiTabMallVisibleStatus;
- (void)tryOpenDeliveryOpen;
- (void)deliveryPageDidRendered;
- (void)deliveryPageDidClosed;
- (void)unregisterSubscriber;
- (void)buildSubscriber;
- (id)realContentChildVC;
- (double)realContentTopMargin;
- (BOOL)isHostScreenClear;
- (BOOL)canShowDesktopGuide;
- (void)channelContainerBeginRefresh;
- (id)currentBridgeCallHanderForCards;
- (id)mallMultiTabCurrentHostForBtm;
- (BOOL)categoryViewShouldSelectOrClick:;
- (void)categoryViewDidClickedRightArrow:;
- (void)categoryView:didSelectedIndex:previousIndex:transitionType:;
- (void)categoryView:willDisplayItem:index:;
- (void)categoryView:didEndDisplayingItem:index:;
- (void)categoryView:didEndDragging:willDecelerate:;
- (void)categoryView:showAnimation:;
- (BOOL)categoryViewEnableFontFactor;
- (id)rollBackHandler;
- (void)setBottomRefreshBlock:;
- (id)bottomRefreshBlock;
- (void)tabBottomSelected;
- (void)tabBottomUnselected;
- (void)configRouterParams:;
- (id)hostEnvIdentifier;
- (BOOL)isHostViewVisible;
- (id)rollBackCommonTrackParams;
- (BOOL)disableIntersectsChecker;
- (void)setRollBackHandler:;
- (void)handleColdLaunch;
- (void)p_injectUGEvadeStrategy;
- (void)p_injectSnackbarStrategy;
- (void)containerAppear:;
- (void)setLastSearchHeight:;
- (double)lastSearchHeight;
- (double)getCategoryDefaultHeight;
- (double)getCategoryDefaultTopOffset;
- (void)updateCategoryHeight:;
- (BOOL)hasSendedCategoryShow;
- (void)setHasSendedCategoryShow:;
- (void)trackCategoryTabShow:;
- (void)trackCategoryTabPanelEntranceShow:;
- (id)coldLandingEnterModel;
- (void)setColdLandingEnterModel:;
- (BOOL)hasFinishRealRender;
- (BOOL)isTapLaunch;
- (void)pageVisibilityChanged:source:pageSource:;
- (void)setIsTapLaunch:;
- (void)forceSwitchToRecommendTab;
- (BOOL)refreshIfNeededComplete:withActively:;
- (id)currentTabContainerController;
- (void)trackSlidingViewScroll;
- (void)trackCategoryTabItemClick:transitionType:;
- (id)popupDelegateWrapper;
- (void)setPopupDelegateWrapper:;
- (id)categoryPanelTaskConfig;
- (void)trackCategoryTabPanelEntranceClick:;
- (void)trackCategoryTabItemShow:index:;
- (void)trackCategoryTabScroll:;
- (void)setHasFinishRealRender:;
- (void)reloadSearchView;
- (BOOL)slidingViewController:gestureRecognizerShouldBegin:;
- (void)lynxCard:sizeDidChanged:;
- (void)lynxCard:didLoadFail:;
- (void)lynxCard:didFinishLoadWithURL:;
- (void)forceRefreshAuto;
- (id)init;
- (void)dealloc;
- (id)delegate;
- (void)viewDidLayoutSubviews;
- (id)subscriber;
- (void)setSubscriber:;
- (void)viewDidLoad;
- (void)setIsVisible:;
- (id)containerView;
- (void)loadView;
- (void)viewDidDisappear:;
- (long long)preferredStatusBarStyle;
- (void)setContainerView:;
- (void)viewWillAppear:;
- (BOOL)isVisible;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)setDelegate:;
- (void)innerScrollViewDidScroll:;
- (id)bgView;
- (id)categoryView;
- (void)setBgView:;
- (void)setCategoryView:;
- (void)setupUI;
- (void)updateUI;
- (void)setupContext;
- (id)searchView;
- (void)setSearchView:;
+ (Class)aAWEECMultiMallDOUYINLGAdapterClass;
@end
