@interface AWERadarNewContainerViewController : AWEBaseTabListViewController
@property (nonatomic) AWENavigationBar navigationBar;
@property (nonatomic) UIButton settingButton;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) AWERadarNearbyItemListViewController itemListController;
@property (nonatomic) AWERadarGameViewController gameListController;
@property (nonatomic) AWERadarActivityBannerViewController activityBannerController;
@property (nonatomic) AWERadarHeaderViewController headerViewController;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString referString;
@property (nonatomic) BOOL isShowGroupEntrance;
@property (nonatomic) BOOL hasExit;
@property (nonatomic) AWERadarSettingView settingView;
@property (nonatomic) NSDictionary alertSetting;
@property (nonatomic) NSString alertShowCountKey;
@property (nonatomic) NSString alertShowLastTimeKey;
@property (nonatomic) BOOL isReloadBackup;
@property (nonatomic) NSTimer uploadLocationTimer;
@property (nonatomic) BOOL viewHasLoaded;
@property (nonatomic) BOOL isExited;
@property (nonatomic) AWERadarHintManager hintManager;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) BOOL authLocation;
@property (nonatomic) AWERadarViewManager viewManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (id)referString;
- (void)setEnterFrom:;
- (BOOL)configWithRouterParamDict:;
- (void)setReferString:;
- (id)enterFrom;
- (void)awe_onReturnButtonClicked:;
- (void)setupContainerScrollView:;
- (id)tabListHeaderViewController;
- (id)tabListItemViewControllerForModel:index:;
- (double)heightForSegmentedControl;
- (void)tabListContainerScrollViewDidScroll:;
- (BOOL)tabContentUseMaxHeight;
- (double)topSafeAreaForTabList;
- (void)setSettingView:;
- (id)settingView;
- (double)naviBarHeight;
- (void)bindViewModel;
- (void)setSettingButton:;
- (id)settingButton;
- (void)p_dismiss;
- (void)p_stopTimer;
- (id)gameListController;
- (BOOL)hasExit;
- (void)setHasExit:;
- (void)setIsExited:;
- (BOOL)isExited;
- (void)p_startTimer;
- (void)p_dismissEvent;
- (id)uploadLocationTimer;
- (void)p_uploadLocation;
- (void)setUploadLocationTimer:;
- (void)headerHeightDidChange;
- (void)setViewManager:;
- (void)setGameListController:;
- (id)itemListController;
- (void)setAuthLocation:;
- (void)setItemListController:;
- (BOOL)authLocation;
- (void)setIsShowGroupEntrance:;
- (BOOL)isShowGroupEntrance;
- (void)p_initAlertStorageKey;
- (void)setViewHasLoaded:;
- (void)setAuthLocation:needHeartBeat:trackParams:;
- (void)p_updateItemList:backupItem:isNetworkError:;
- (void)p_requestActivityInfoAndRefreshIfNeeded;
- (BOOL)isNeedShowHistroyAlert;
- (void)p_setPopTransitionState:;
- (void)p_startHeartBreakWithNeedRetry:;
- (void)p_checkCanScroll;
- (BOOL)viewHasLoaded;
- (void)p_stopHeartBreak;
- (void)p_startHeartBreak;
- (void)activityInfoFetched:;
- (id)activityBannerController;
- (void)p_updateHintLabel:;
- (void)p_trackGroupEntranceShow;
- (void)showHistoryAlertIfNeeded;
- (id)alertShowCountKey;
- (id)alertShowLastTimeKey;
- (void)p_alertActionBlock;
- (void)p_alertCancelBlock;
- (void)p_trackHistoryFriendsAlertShow;
- (void)p_trackHistoryFriendsKeepClick;
- (void)p_trackHistoryFriendsRefuseClick;
- (BOOL)p_enableUpdateBlueTooth;
- (void)settingButtonClicked:;
- (void)setAlertShowCountKey:;
- (void)setAlertShowLastTimeKey:;
- (void)p_activityInfoFetchedWithModel:;
- (void)p_updateBackgroundColorWithActivityModel:;
- (void)setActivityBannerController:;
- (BOOL)isReloadBackup;
- (void)setIsReloadBackup:;
- (BOOL)prefersStatusBarHidden;
- (id)navigationBar;
- (void)fetchData;
- (id)init;
- (id)alertSetting;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setBackgroundView:;
- (void)applicationWillEnterForeground:;
- (void)setSubtitleLabel:;
- (id)backgroundView;
- (void)viewDidDisappear:;
- (long long)preferredStatusBarStyle;
- (id)hintManager;
- (void)viewWillAppear:;
- (void)setAlertSetting:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)headerViewController;
- (void)setHintManager:;
- (void)setNavigationBar:;
- (id)subtitleLabel;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)setHeaderViewController:;
- (void)popViewController;
- (id)viewManager;
- (void)p_addObservers;
@end
