@interface AWETeenUserHomeViewController : UIViewController
@property (nonatomic) AWESlidingTabbarView tabView;
@property (nonatomic) AWETeenUserProfileSlidingViewController slidingVC;
@property (nonatomic) AWETeenLikeWorkViewController likeVC;
@property (nonatomic) AWETeenCollectWorkViewController collectionVC;
@property (nonatomic) AWETeenPrivateWorkViewController privateWorkVC;
@property (nonatomic) AWETeenUserProfileTabHelper tabHelper;
@property (nonatomic) AWETeenProfileHeaderViewController profileHeaderVC;
@property (nonatomic) AWETeenUserHomeMoreButton moreFuncButton;
@property (nonatomic) UIView moreFuncBackgroundView;
@property (nonatomic) UIView notationDotView;
@property (nonatomic) MASConstraint navRightViewToSearch;
@property (nonatomic) MASConstraint navRightViewToMore;
@property (nonatomic) AWETeenModeFastEntryButton fastEntryButton;
@property (nonatomic) AWETeenAgeGuideManager ageGuideManager;
@property (nonatomic) AWETeenProfileSettingSliderViewController profileSettingSliderVC;
@property (nonatomic) UIView settingSliderMenuView;
@property (nonatomic) UIView redDotView;
@property (nonatomic) AWEUserModel user;
@property (nonatomic) BOOL firstLayoutHeader;
@property (nonatomic) BOOL shouldReloadDataAfterAppear;
@property (nonatomic) BOOL alreadyLocateDefaultTab;
@property (nonatomic) BOOL isFirstTimeViewDidLoad;
@property (nonatomic) Q lastSelectedSlidingTab;
@property (nonatomic) BOOL didRefreshDataAfterEnterHomePage;
@property (nonatomic) BOOL isViewDidAppear;
@property (nonatomic) BOOL showProfileCompletedAnimation;
@property (nonatomic) Q headerContentStyle;
@property (nonatomic) q currentTabbarButtonType;
@property (nonatomic) q currentSelectedIndex;
@property (nonatomic) NSString referString;
@property (nonatomic) BOOL shouldRefreshAfterDigg;
@property (nonatomic) BOOL enterOtherTab;
@property (nonatomic) BOOL shouldKeepSettingSliderMenuView;
@property (nonatomic) BOOL isSwipeGesture;
@property (nonatomic) BOOL isHorizontalGesture;
@property (nonatomic) BOOL isFirstTimeUpdateUser;
@property (nonatomic) BOOL hasTrackYellowDotEvent;
@property (nonatomic) q preFavoritePermission;
@property (nonatomic) q prevContentOffsetY;
@property (nonatomic) double prevGestrueLocationY;
@property (nonatomic) double prevGestrueLocationX;
@property (nonatomic) BOOL animatingForPanGesture;
@property (nonatomic) BOOL needShowBannedAlert;
@property (nonatomic) {CGSize=dd} transitionToSize;
@property (nonatomic) BOOL isForcePrivateWorkTab;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString awe_padUITrackerPageEnterFrom;
@property (nonatomic) BOOL awe_padUITrackerIgnoreStayTime;
- (void)p_setupUI;
- (id)referString;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)didFinishUpdateAwemeUser;
- (BOOL)configWithRouterParamDict:;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)setReferString:;
- (void)awe_themeReload;
- (id)awesst_enterFrom;
- (long long)numberOfControllers:;
- (id)slidingViewController:viewControllerAtIndex:;
- (void)slidingViewController:didSelectIndex:transitionType:;
- (id)aAWEPadModuleAdapter;
- (BOOL)isViewDidAppear;
- (id)currentScrollView;
- (void)userProfileTabVC:didScroll:;
- (id)contentOffsetOfCurrentVC;
- (double)maxBannerHeight;
- (id)userForTabVC;
- (double)userProfileTabHeight;
- (id)tabHelper;
- (void)userProfileTabViewControllerWillBeginDragging:;
- (id)awe_padUITrackerPageEnterFrom;
- (long long)currentSelectedIndex;
- (void)p_trackShow;
- (id)aAWEChildModeModuleServiceCommonAdapter;
- (void)tabBarDidChangeNotification:;
- (void)_refreshData;
- (id)slidingVC;
- (void)setCurrentSelectedIndex:;
- (void)setSlidingVC:;
- (void)setIsViewDidAppear:;
- (id)redDotView;
- (void)setRedDotView:;
- (void)addNavigationBar;
- (BOOL)isShowSliderMenuView;
- (void)handleShowSliderPanGesture:;
- (void)handleHideSliderPanGesture:;
- (void)_updateTabBarSnapshot;
- (double)headerViewVisibleHeight;
- (id)likeVC;
- (void)setLikeVC:;
- (void)setLastSelectedSlidingTab:;
- (unsigned long long)lastSelectedSlidingTab;
- (id)p_tabVCForType:;
- (void)didUpdateAlbumCollectStatus:albumID:;
- (void)p_tryToShowAlbumCollectRedDot;
- (void)setIsForcePrivateWorkTab:;
- (void)setTransitionToSize:;
- (id)transitionToSize;
- (void)didFinishCollectWithItemID:actionType:collectCount:;
- (void)changeSlidingTabWithLocation:;
- (BOOL)isFirstTimeViewDidLoad;
- (void)setIsFirstTimeViewDidLoad:;
- (id)ageGuideManager;
- (void)setAgeGuideManager:;
- (void)handleFixHeaderScrollPanGesture:;
- (void)updateHeaderHeight;
- (id)profileSettingSliderVC;
- (void)willTerminateAPP:;
- (void)p_refreshUserData;
- (id)profileHeaderVC;
- (id)fastEntryButton;
- (id)moreFuncBackgroundView;
- (BOOL)shouldKeepSettingSliderMenuView;
- (id)settingSliderMenuView;
- (void)removeSettingSliderMenu;
- (void)setProfileSettingSliderVC:;
- (id)notationDotView;
- (BOOL)shouldReloadDataAfterAppear;
- (void)setShouldReloadDataAfterAppear:;
- (BOOL)didRefreshDataAfterEnterHomePage;
- (BOOL)shouldRefreshAfterDigg;
- (void)_refreshLikeWork;
- (void)setShouldRefreshAfterDigg:;
- (void)setDidRefreshDataAfterEnterHomePage:;
- (void)showSliderMenu:animation:highlightItemType:;
- (void)setShouldKeepSettingSliderMenuView:;
- (BOOL)showProfileCompletedAnimation;
- (void)setShowProfileCompletedAnimation:;
- (BOOL)alreadyLocateDefaultTab;
- (BOOL)isForcePrivateWorkTab;
- (void)setPreFavoritePermission:;
- (void)p_decreaseMemory;
- (void)__updateViewForRotateToSize:;
- (unsigned long long)headerContentStyle;
- (void)p_showUserBannedAlert:;
- (void)p_updateCompletionPercent;
- (void)_refreshHeaderViewAfterFetchUser:;
- (id)collectionVC;
- (id)privateWorkVC;
- (void)didDiggAweme:;
- (void)shouldChangeLanguage:;
- (void)didEnterProfileEditVC:;
- (void)shouldRefreshDataAfterEnter:;
- (void)sliderMenuButtonClicked:;
- (void)didCompleteProfileInfo;
- (void)setCurrentTabbarButtonType:;
- (void)setEnterOtherTab:;
- (BOOL)enterOtherTab;
- (void)setTabHelper:;
- (void)setNeedShowBannedAlert:;
- (BOOL)needShowBannedAlert;
- (void)setAlreadyLocateDefaultTab:;
- (void)setFastEntryButton:;
- (void)didSelectTabViewButtonAgainAtIndex:;
- (void)_refreshHeaderViewAlpha;
- (void)updateHeaderViewFrameWithOffset:;
- (void)updateContentThemeWithOffset:;
- (void)setPrevContentOffsetY:;
- (void)setHeaderContentStyle:;
- (id)moreFuncButton;
- (id)navRightViewToSearch;
- (void)setNavRightViewToMore:;
- (id)navRightViewToMore;
- (void)refreshHeaderHeight:animateChildVCs:;
- (void)p_addLocksToTab;
- (void)animateChildVCs;
- (void)refreshAlphaOfNavibar:;
- (void)showSliderTrackerWithEnterMethod:;
- (void)handlePanGestureIfSliderShow:gestureRecognizer:;
- (void)showProfileSettingSliderVC;
- (void)sliderMenuAnimationWithOriginX:duration:showSlider:removeSliderVC:needTracker:highlightItemType:;
- (void)addProfileSettingSliderVC;
- (void)openTeenEntrancePage;
- (void)openEyeProtectionPage;
- (void)setIsHorizontalGesture:;
- (void)setIsSwipeGesture:;
- (BOOL)isHorizontalGesture;
- (BOOL)isSwipeGesture;
- (BOOL)animatingForPanGesture;
- (void)setPrevGestrueLocationY:;
- (void)setPrevGestrueLocationX:;
- (long long)prevContentOffsetY;
- (double)prevGestrueLocationY;
- (double)fixTabScrollViewContentOffsetIfNeeded;
- (void)setAnimatingForPanGesture:;
- (void)fastEntryButtonTapped:;
- (void)p_fixOtherVCOffset:;
- (void)_removeObserversAfterMemoryWarning;
- (BOOL)_willShowLocationAlert;
- (BOOL)currentIsBright;
- (BOOL)currentIsDark;
- (void)setCollectionVC:;
- (void)setPrivateWorkVC:;
- (void)setProfileHeaderVC:;
- (void)setMoreFuncButton:;
- (void)setMoreFuncBackgroundView:;
- (void)setNotationDotView:;
- (void)setNavRightViewToSearch:;
- (void)setSettingSliderMenuView:;
- (BOOL)firstLayoutHeader;
- (void)setFirstLayoutHeader:;
- (long long)currentTabbarButtonType;
- (BOOL)isFirstTimeUpdateUser;
- (void)setIsFirstTimeUpdateUser:;
- (BOOL)hasTrackYellowDotEvent;
- (void)setHasTrackYellowDotEvent:;
- (long long)preFavoritePermission;
- (double)prevGestrueLocationX;
- (void)applicationWillResignActive:;
- (id)user;
- (BOOL)prefersStatusBarHidden;
- (double)headerHeight;
- (void)viewWillDisappear:;
- (id)init;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)_addObservers;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (void)applicationWillEnterForeground:;
- (void)viewDidDisappear:;
- (void)_removeObservers;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (void)viewDidAppear:;
- (long long)preferredStatusBarUpdateAnimation;
- (void)refreshData;
- (void)doSettings;
- (void)_removeController:;
- (id)tabView;
- (void)setTabView:;
- (void)_resetUI;
+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEChildModeModuleServiceCommonAdapterClass;
@end
