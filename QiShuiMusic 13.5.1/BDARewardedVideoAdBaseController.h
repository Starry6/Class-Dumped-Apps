@interface BDARewardedVideoAdBaseController : UIViewController
@property (nonatomic) <BDARVCancelableTask> lastTask;
@property (nonatomic) NSNumber lastAdWatchTime;
@property (nonatomic) BOOL isOriginStatusBarHidden;
@property (nonatomic) NSDictionary previousStatus;
@property (nonatomic) NSArray adModels;
@property (nonatomic) BOOL viewDidLoaded;
@property (nonatomic) BOOL hasShowLiteWebView;
@property (nonatomic) Q loadState;
@property (nonatomic) Q newLoadState;
@property (nonatomic) BDARVIndicatorView loadingView;
@property (nonatomic) q videoRetryCount;
@property (nonatomic) BDARewardedVideoAdBaseController parentVC;
@property (nonatomic) BDARewardedVideoAdBaseController backVC;
@property (nonatomic) BOOL disableSessionDeactive;
@property (nonatomic) BOOL disableSessionBeactive;
@property (nonatomic) BOOL isClosedByButton;
@property (nonatomic) BOOL showStatusBar;
@property (nonatomic) BOOL shouldConfigStatusBar;
@property (nonatomic) q position;
@property (nonatomic) BOOL isFallBack;
@property (nonatomic) BOOL isLynx;
@property (nonatomic) BOOL isPlayerPreload;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) BOOL isPreloadAtInit;
@property (nonatomic) q currentResolution;
@property (nonatomic) q rewardIndex;
@property (nonatomic) q rewardOneMore;
@property (nonatomic) BDARewardedVideoAdConfig config;
@property (nonatomic) BDARFirstFrameTime firstFrameTime;
@property (nonatomic) Q netStatus;
@property (nonatomic) Q lynxStatus;
@property (nonatomic) double stayBegin;
@property (nonatomic) NSDictionary playerStatusInfoAtPause;
@property (nonatomic) BDARVPlayerManager playerManager;
@property (nonatomic) NSString liveRoomId;
@property (nonatomic) <BDARewardedVideoAdDelegate> delegate;
@property (nonatomic) <BDARewardedVideoAlertDelegate> alertDelegate;
@property (nonatomic) NSString adUnitID;
@property (nonatomic) NSString creatorId;
@property (nonatomic) BDARVSourceModel sourceModel;
@property (nonatomic) q changeTimes;
@property (nonatomic) BOOL disableHostSendReward;
@property (nonatomic) BOOL sendReward;
@property (nonatomic) BOOL sendFirstReward;
@property (nonatomic) NSDictionary rewardExtra;
@property (nonatomic) NSDictionary eventExtra;
@property (nonatomic) NSString rewardInfo;
@property (nonatomic) BOOL enableOneMore;
@property (nonatomic) BOOL isPresent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)NetWork_endLoadingWithResult:;
- (void)NetWork_handleTask;
- (id)initWithSource:config:delegate:;
- (void)preloadManagerStartWithAdModel:;
- (void)setChangeTimes:;
- (void)setRewardIndex:;
- (long long)videoRetryCount;
- (BOOL)NetWork_handleCacheModels;
- (void)NetWork_startLoading;
- (id)adModel;
- (BOOL)isPlayerPreload;
- (BOOL)isPreloadAtInit;
- (id)lastAdWatchTime;
- (BOOL)sendFirstReward;
- (void)setRewardExtra:;
- (id)_moitorCategoryCommonParam;
- (id)_moitorCommonParam;
- (id)_moitorExtraCommonParam;
- (id)_moitorValueCommonParam;
- (id)adModels;
- (id)adUnitID;
- (id)addInspireRequestExtraParams;
- (void)backToNative;
- (id)backVC;
- (void)bdarKill;
- (void)bdarShow;
- (void)buildupConfig:;
- (long long)changeTimes;
- (BOOL)disableHostSendReward;
- (BOOL)disableSessionBeactive;
- (BOOL)disableSessionDeactive;
- (BOOL)enableOneMore;
- (id)eventExtra;
- (id)firstFrameTime;
- (void)handleJumpWithActionButton:;
- (void)handleLoading;
- (void)handleRequestResultWithModels:error:;
- (BOOL)hasShowLiteWebView;
- (void)hotReloadVideo;
- (void)indicatorViewClosed:;
- (void)initAdDate:;
- (id)initWithModel:source:config:;
- (BOOL)isClosedByButton;
- (BOOL)isFallBack;
- (BOOL)isLynx;
- (BOOL)isOriginStatusBarHidden;
- (BOOL)isPreload;
- (id)liveRoomId;
- (void)loadVideoIsNext:withExtraInfo:;
- (unsigned long long)lynxStatus;
- (void)morePreloadAdsEngine;
- (unsigned long long)netStatus;
- (unsigned long long)newLoadState;
- (unsigned long long)newloadState;
- (void)pauseAdVideo;
- (id)playerManager;
- (id)playerStatusInfo;
- (id)playerStatusInfoAtPause;
- (void)preloadAppStoreWithModel:;
- (void)preloadLynxLandingWithModel:;
- (void)presentRewardedVideoViewController;
- (void)pureMonitorWithEvent:param:;
- (void)resumeAdVideo;
- (void)resumePreviousStatus;
- (id)rewardExtra;
- (long long)rewardIndex;
- (id)rewardInfo;
- (long long)rewardOneMore;
- (void)savePreviousStatus;
- (void)sendBackVcToFront;
- (BOOL)sendReward;
- (void)setAdModels:;
- (void)setBackVC:;
- (void)setDisableHostSendReward:;
- (void)setDisableSessionBeactive:;
- (void)setDisableSessionDeactive:;
- (void)setEnableOneMore:;
- (void)setEventExtra:;
- (void)setFirstFrameTime:;
- (void)setHasShowLiteWebView:;
- (void)setIsClosedByButton:;
- (void)setIsFallBack:;
- (void)setIsLynx:;
- (void)setIsOriginStatusBarHidden:;
- (void)setIsPlayerPreload:;
- (void)setIsPreload:;
- (void)setIsPreloadAtInit:;
- (void)setLastAdWatchTime:;
- (void)setLastTask:;
- (void)setLiveRoomId:;
- (void)setLynxStatus:;
- (void)setNetStatus:;
- (void)setNewLoadState:;
- (void)setPlayerManager:;
- (void)setPlayerStatusInfoAtPause:;
- (void)setRewardInfo:;
- (void)setRewardOneMore:;
- (void)setSendFirstReward:;
- (void)setSendReward:;
- (void)setShouldConfigStatusBar:;
- (void)setStayBegin:;
- (void)setVideoRetryCount:;
- (void)setViewDidLoaded:;
- (BOOL)shouldConfigStatusBar;
- (void)skStoreViewDidAppear:;
- (void)skStoreViewDidDisappear:;
- (void)startPreload:;
- (double)stayBegin;
- (void)videoMonitorWithEvent:;
- (BOOL)viewDidLoaded;
- (void)setPosition:;
- (void)applicationWillResignActive:;
- (BOOL)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)position;
- (void)load;
- (long long)preferredStatusBarStyle;
- (unsigned long long)loadState;
- (BOOL)prefersStatusBarHidden;
- (void)setConfig:;
- (void)setDelegate:;
- (void)setShowStatusBar:;
- (void)prepareForReuse;
- (void)close;
- (void)registerNotifications;
- (void)applicationDidBecomeActive:;
- (void)viewDidDisappear:;
- (void)initCommon;
- (void)applicationWillTerminate:;
- (BOOL)showStatusBar;
- (void)viewWillDisappear:;
- (id)delegate;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (BOOL)isPresent;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (id)config;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setIsPresent:;
- (id)sourceModel;
- (id)alertDelegate;
- (void)setAlertDelegate:;
- (id)previousStatus;
- (id)loadingView;
- (void)setLoadingView:;
- (id)lastTask;
- (long long)currentResolution;
- (void)setCurrentResolution:;
- (id)parentVC;
- (void)setParentVC:;
- (void)setSourceModel:;
- (void)setStatus;
- (void)setLoadState:;
- (void)setPreviousStatus:;
- (id)creatorId;
+ (id)initWithSource:config:delegate:;
+ (id)requestParamsWithSource:config:;
+ (id)initWithDict:source:config:;
+ (id)initWithSource:config:;
+ (BOOL)isKeySource:;
+ (void)loadAdsWithSource:config:;
@end
