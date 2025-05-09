@interface AWEUGFCollectActivityController : NSObject
@property (nonatomic) UIView<AWEUGPendantUIProtocol><AWEUGFCollectUIProtocol> pendant;
@property (nonatomic) AWEUGPendantActivityModel dataModel;
@property (nonatomic) AWEUGPendantEvadeControlService evadeControlService;
@property (nonatomic) BOOL userClosed;
@property (nonatomic) BOOL isResourceComplete;
@property (nonatomic) <AWEUGPendantResourceManagerProtocol> resourceDelegate;
@property (nonatomic) AWEPendantWatchVideoTask watchVideoTask;
@property (nonatomic) NSTimer taskStartTimer;
@property (nonatomic) NSTimer taskEndTimer;
@property (nonatomic) BOOL needRetryGetTask;
@property (nonatomic) BOOL needRetryTaskDone;
@property (nonatomic) double rewardAnimationFrame;
@property (nonatomic) BOOL hasShowCollectAnimation;
@property (nonatomic) BOOL hasShowDisCollectAnimation;
@property (nonatomic) BOOL isPlayingAnimation;
@property (nonatomic) AWEUGPendantScrollFeedService scrollRetryService;
@property (nonatomic) BOOL restartTaskChecking;
@property (nonatomic) BOOL restartTaskRuning;
@property (nonatomic) BOOL needRetryFolded;
@property (nonatomic) BOOL needRetryExpanded;
@property (nonatomic) BOOL isFeedTab;
@property (nonatomic) BOOL isStateChanging;
@property (nonatomic) BOOL needRetryShowBubble;
@property (nonatomic) AWEUGPendantActivityModel needRetryUpdateModel;
@property (nonatomic) BOOL needRetryUpdateModelFlag;
@property (nonatomic) AWEFCoinTaskModel currentTaskModel;
@property (nonatomic) AWEFCoinNotLoginConfigModel notLoginConfigModel;
@property (nonatomic) double lastRequestCampaignTime;
@property (nonatomic) double reportStuckedTime;
@property (nonatomic) q requestRetryTimes;
@property (nonatomic) double lastStuckedTime;
@property (nonatomic) MMKV mmkv;
@property (nonatomic) NSString currScene;
@property (nonatomic) BOOL sceneSwitched;
@property (nonatomic) BOOL hasGetTask;
@property (nonatomic) q loadResourceTimes;
@property (nonatomic) double lastRequestCloseDataTime;
@property (nonatomic) BOOL needShowRestartBubble;
@property (nonatomic) BOOL restartTask;
@property (nonatomic) BOOL inNotLoginProgress;
@property (nonatomic) BOOL shouldShowLoginBubble;
@property (nonatomic) BOOL isJumpingPage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIView<AWEUGPendantUIProtocol> pendantView;
@property (nonatomic) AWEUGPendantActivityModel activityModel;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)handleConnectionChanged:;
- (void)teenModeDidChange:isLogout:;
- (id)pendantView;
- (void)showPendant;
- (void)hidePendant;
- (id)pendant;
- (void)setPendant:;
- (void)setMmkv:;
- (id)mmkv;
- (void)setResourceDelegate:;
- (id)resourceDelegate;
- (BOOL)restartTask;
- (void)basicModeDidChange:;
- (void)tabBarDidChangeNotification:;
- (id)activityModel;
- (void)feedContainerViewControllerDidSwitchTab:;
- (void)trackLogWithKey:message:;
- (id)currentFeedContainerViewController;
- (long long)currentFeedType;
- (BOOL)shouldEvadePendantWithAwemeModel:;
- (BOOL)checkIfCanShowPendant;
- (id)currScene;
- (void)setCurrScene:;
- (void)pendantResourceDownloadNotify:;
- (void)pendantDraggingEndedNotify:;
- (void)setupPendantResource;
- (void)setupPendantView;
- (void)setIsResourceComplete:;
- (BOOL)isResourceComplete;
- (void)pendantContentClick;
- (void)pendantCloseClick;
- (id)evadeControlService;
- (void)logEvadeControlType:;
- (void)setEvadeControlService:;
- (void)configPendant;
- (BOOL)userClosed;
- (void)setUserClosed:;
- (void)pendantContentClickWithMonitor;
- (void)monitorService:status:level:error:extraInfo:;
- (void)recordCloseAction;
- (void)updatePendantResource;
- (id)frameOfPendantView;
- (id)frameOfExpandPendantCloseWithPendantFrame:;
- (id)frameOfFoldPendantCloseWithPendantFrame:;
- (double)heightToStatusBar;
- (void)setupWithConfigModel:resourceDelegate:;
- (void)updataActivityMessageWith:;
- (void)updateBaseView:;
- (void)didScrollCountDown:service:;
- (void)didUpdateWatchVideoProgress:;
- (void)didWatchVideoComplete;
- (void)playRewardAnimation;
- (void)showBubbleWithModel:;
- (void)showBubble;
- (BOOL)isFeedTab;
- (void)removeBubbleIfNeeded;
- (void)setupTask;
- (BOOL)checkIfCanShowFCollect;
- (BOOL)isUserClosePendant;
- (unsigned long long)restartTaskIfNeed;
- (unsigned long long)restartTaskAfterDuration:;
- (void)clearUserCloseStorage;
- (void)setIsPlayingAnimation:;
- (BOOL)isPlayingAnimation;
- (id)currentTaskModel;
- (void)feedContainerViewControllerDidAppear:;
- (void)checkPendantUIIfCertify:;
- (void)setupLoopAnimation;
- (void)setupFcollectDrag;
- (void)setupFCollectEdge;
- (void)setupFCollectDelete;
- (BOOL)checkIfNeedEdgeFold;
- (void)stateChangeComplete;
- (void)setNeedRetryFolded:;
- (void)setupCurrScene;
- (void)setupPendantEvadeControlService;
- (void)setShouldShowLoginBubble:;
- (BOOL)shouldShowLoginBubble;
- (void)setupTaskConfig;
- (void)setupScrollRetryService;
- (id)firstShowPendantTimeKey;
- (unsigned long long)checkLastTimeFCollectState;
- (BOOL)checkIfInprocessOfTask:;
- (void)setupTaskStartTimer;
- (id)watchVideoTask;
- (BOOL)checkIfCanRunTask;
- (void)getTaskFrom:retrying:;
- (void)setupTaskEndTimer;
- (long long)loadResourceTimes;
- (void)setLoadResourceTimes:;
- (void)setWatchVideoTask:;
- (void)bubbleClick;
- (void)edgedBubbleClick;
- (void)showStayPopupDialog;
- (BOOL)needRetryShowBubble;
- (void)setNeedRetryShowBubble:;
- (void)setSceneSwitched:;
- (void)resumeTaskInfoBubble;
- (void)saveFirstTimeShow;
- (BOOL)sceneSwitched;
- (id)taskCollectStatus;
- (BOOL)needShowRestartBubble;
- (void)setNeedShowRestartBubble:;
- (void)setNotLoginConfigModel:;
- (void)setNeedRetryUpdateModel:;
- (void)setNeedRetryUpdateModelFlag:;
- (void)setupNotLoginConfigModel;
- (void)configActivityType;
- (BOOL)hasGetTask;
- (void)setupBubbleUIInfo:bubbleSubtitle:duration:bubbleURL:adjustment:;
- (BOOL)checkIfUserClosedPendant;
- (void)reportTaskClose:callback:;
- (void)trackReadProgressBarCloseAllWithCloseTimes:;
- (BOOL)isJumpingPage;
- (void)setIsJumpingPage:;
- (void)retryNetworkWithFrom:;
- (void)setIsStateChanging:;
- (void)setNeedRetryExpanded:;
- (void)recordPendantClick;
- (BOOL)inNotLoginProgress;
- (void)pullUpCollectAtmoLoginPanel;
- (id)lastClickPendantTimeKey;
- (void)requestPendantCloseData:;
- (void)showEdgeBubble;
- (double)lastRequestCloseDataTime;
- (void)setLastRequestCloseDataTime:;
- (BOOL)checkHasShownEdgedBubble;
- (void)dealCloseData:completion:;
- (void)removeEdgedHintBubbleIfNeeded;
- (void)recordTaskPermanentClose;
- (void)resetLastTimeFCollectState;
- (id)scrollRetryService;
- (void)setScrollRetryService:;
- (void)reportTask:from:retrying:;
- (BOOL)needRetryGetTask;
- (BOOL)needRetryTaskDone;
- (BOOL)checkIfCanRequest;
- (void)setIsFeedTab:;
- (id)notLoginConfigModel;
- (void)setInNotLoginProgress:;
- (id)getNotLoginFakeTask;
- (void)dealData:from:isGetTask:retrying:error:;
- (void)showBottomViewStyle;
- (void)handleNotLoginFakeTask;
- (void)setNeedRetryGetTask:;
- (void)setNeedRetryTaskDone:;
- (void)logFCollectStuckedWithExtraInfo:error:;
- (void)setHasGetTask:;
- (void)dealGetTaskData:from:retrying:;
- (void)dealTaskDoneData:from:retrying:;
- (void)logFCollectTaskResumeFromStuckWithFrom:;
- (void)dealTaskDataBubble:;
- (void)setupLoginSuccessBubble;
- (void)setCurrentTaskModel:;
- (void)setLastStuckedTime:;
- (double)lastStuckedTime;
- (long long)requestRetryTimes;
- (void)setRequestRetryTimes:;
- (void)setReportStuckedTime:;
- (void)showAddCollectAnimationWithNum:;
- (void)recordHasShownEdgedBubble;
- (void)clearPendantProgress;
- (id)getNotLoginFakeTaskDone;
- (void)handleNotLoginFakeTaskDone;
- (id)fcollectVersion;
- (void)startGetTask;
- (void)setTaskStartTimer:;
- (void)setTaskEndTimer:;
- (void)setHasShowCollectAnimation:;
- (void)setHasShowDisCollectAnimation:;
- (void)animationPlayWithFrameIndex:lottie:splitFrameArray:;
- (void)recordFCollectEdgeStatus:;
- (BOOL)needRetryFolded;
- (void)retryUpdateActivity;
- (BOOL)needRetryExpanded;
- (BOOL)needRetryUpdateModelFlag;
- (id)needRetryUpdateModel;
- (void)setRewardAnimationFrame:;
- (double)rewardAnimationFrame;
- (BOOL)hasShowCollectAnimation;
- (BOOL)hasShowDisCollectAnimation;
- (void)resumeRewardAnimation;
- (double)lastRequestCampaignTime;
- (void)setLastRequestCampaignTime:;
- (BOOL)restartTaskRuning;
- (BOOL)restartTaskChecking;
- (void)setRestartTaskChecking:;
- (void)setRestartTaskRuning:;
- (void)setRestartTask:;
- (void)checkIfNeedResumeAnimation;
- (void)saveLoginSucessBubble;
- (BOOL)checkIfCanShowBubble;
- (id)frameOfExpandEnhancePendantCloseWithPendantFrame:;
- (BOOL)isOtherAnimationGoing;
- (id)taskStartTimer;
- (id)taskEndTimer;
- (BOOL)isStateChanging;
- (double)reportStuckedTime;
- (void)didEnterBackground;
- (void)applicationDidBecomeActive:;
- (id)init;
- (void)dealloc;
- (void)clearData;
- (void)didEnterForeground;
- (void).cxx_destruct;
- (id)dataModel;
- (void)setDataModel:;
- (void)cancelTask;
- (id)getStyle;
- (BOOL)hasTask;
- (void)animationComplete;
- (void)setupNotification;
- (id)currentDateString;
- (void)updateActivityWith:;
+ (id)dateFromString:;
+ (long long)daysBetweenDate:andDate:;
@end
