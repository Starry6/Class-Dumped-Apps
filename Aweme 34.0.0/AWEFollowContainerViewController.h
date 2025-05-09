@interface AWEFollowContainerViewController : UIViewController
@property (nonatomic) q type;
@property (nonatomic) NSString referString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIView contentView;
@property (nonatomic) BOOL hasFirstFetched;
@property (nonatomic) BOOL isViewAppearing;
@property (nonatomic) UIViewController<AWELiveSkylightViewControllerProtocol> liveSkylightViewController;
@property (nonatomic) AWELiveSkylightViewModel liveSkylightViewModel;
@property (nonatomic) BOOL isSkylightUnfolded;
@property (nonatomic) BOOL hasSkylightFirstFetched;
@property (nonatomic) UIView<AWEPublishProgressViewProtocol> progressView;
@property (nonatomic) NSMutableArray groupControllerModels;
@property (nonatomic) AWEFollowGroupControllerModel selectedGroupControllerModel;
@property (nonatomic) NSArray groupControllerClasses;
@property (nonatomic) # concernControllerClass;
@property (nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol><AWEFollowGroupViewControllerProtocol><AWEConcernFeedViewControllerProtocol> concernFeedTableVC;
@property (nonatomic) <AWEFeedConcernViewModelProtocol> concernFeedViewModel;
@property (nonatomic) UIPanGestureRecognizer verticalPan;
@property (nonatomic) <AWEFollowContainerPullRefreshViewProtocol> pullRefreshView;
@property (nonatomic) q refreshState;
@property (nonatomic) Q verticalPanType;
@property (nonatomic) BOOL verticalPanActive;
@property (nonatomic) BOOL tapticEngineTapped;
@property (nonatomic) AWEFollowContainerViewControllerInitConfig initialConfig;
@property (nonatomic) BOOL isShowingFollowGroupSelectionPanel;
@property (nonatomic) <AWEHPChannelControllerConfigProtocol> channelConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canRefresh;
- (void)setPureMode:;
- (id)referString;
- (void)didFinishLogoutWithUid:;
- (void)pauseWithAnimation;
- (void)playWithAnimation;
- (void)setPlayerAudioDevice:;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)resetPauseIcon;
- (void)pauseWithAnimationUsingCustomPauseIcon:;
- (BOOL)pauseBySingleClick;
- (void)setPauseBySingleClick:;
- (BOOL)isVideoRelatedPanelShowing;
- (void)willSetPureModeBlock:;
- (BOOL)isRelatedVideoPanelShowing;
- (void)transition_didStartTransitionWithContext:;
- (id)currentAweme;
- (id)currentVideoController;
- (BOOL)currentTabIsTop;
- (double)currentPlayingTime;
- (BOOL)isCommentPanelShowing;
- (BOOL)isLikeUserPanelShowing;
- (void)onAwemeDeleted:isDislike:;
- (void)holdStopPlayer;
- (void)setAccessoriesHidden:;
- (void)didScrollToConcernWillShowGuideIfNeeded:;
- (BOOL)isAITextPanelShowing;
- (id)transition_destinatedViewControllerForSlideDirection:gestureRecognizer:;
- (BOOL)transition_enableCustomActionForSlideDirection:gestureRecognizer:;
- (void)transition_performCustomActionForSlideDirection:gestureRecognizer:;
- (void)animatedRefreshWithCompletion:;
- (void)seekPlayTimeWithItemID:;
- (void)onAwemeMarkDislikeCanWithdraw:;
- (void)onAwemeDeleted:isLiveFinish:isDislike:;
- (void)onAwemeDeleted:isLiveFinish:isDislike:isLiveEnded:;
- (void)slientRefreshWithCompletion:;
- (BOOL)isShowingFollowGroupPanel;
- (void)setRefreshMethod:;
- (id)currentAwemeID;
- (id)currentAwemeAuthorID;
- (id)currentAwemeInfo;
- (id)recentTenAwemeID;
- (void)setPreviousPageValue:;
- (void)setEnterTrackerInfo:;
- (BOOL)slidingScrollViewShouldScrollWithPan:;
- (BOOL)onSegmentRepeatedClickWithIndex:;
- (void)onAwemeExchange:;
- (void)onFamilarAwemeInsertBelowWithItemID:isFromUserProfile:;
- (id)awesst_enterFrom;
- (unsigned long long)transition_destinatedType;
- (id)aAWEPadModuleAdapter;
- (void)awe_padUISetEnterLandscapeStateIfNeed;
- (void)awe_padUITrackLandscapeStayTimeIfNeed;
- (void)setIsViewAppearing:;
- (BOOL)fullDetaillHalfScreenViewShowed;
- (id)liveSkylightViewController;
- (BOOL)isShowingFollowGroupSelectionPanel;
- (void)setIsSkylightUnfolded:;
- (BOOL)hasFirstFetched;
- (BOOL)isSkylightUnfolded;
- (void)clickNoticePush;
- (unsigned long long)verticalPanType;
- (unsigned long long)directionForPan:;
- (id)currentTabReferString;
- (void)setRefreshState:;
- (id)verticalPan;
- (void)setVerticalPanType:;
- (void)setVerticalPan:;
- (void)setHasFirstFetched:;
- (id)awe_padUITrackerPageEnterFrom;
- (BOOL)awe_padUITrackerIgnoreStayTime;
- (void)setChannelConfig:;
- (double)cellRightInteractionContainerHeight;
- (id)initialConfig;
- (void)setInitialConfig:;
- (id)channelConfig;
- (void)windowDidResignKeyNotification:;
- (void)windowDidBecomeKeyNotification:;
- (id)getRequestMethod;
- (BOOL)getIsSkylightUnfolded;
- (BOOL)getHasFirstFetched;
- (BOOL)isDisplayingLastView;
- (void)updateEnterModel:;
- (void)layoutUploadProgressView:;
- (id)concernFeedTableVC;
- (id)initWithConcernControllerClass:otherGroupControllerClasses:initialConfig:;
- (BOOL)convertToFeedTabItemVCWithSubTabModel:convertComplection:failure:;
- (id)selectedGroupControllerModel;
- (void)convertToFeedTabItemVCWithSubTabModel:convertComplection:;
- (id)findSubTabModelByType:;
- (void)autoRefreshSkylight:;
- (void)updateAccessoriesHidden:;
- (id)groupControllerModels;
- (void)registerMessages;
- (void)bindViewModels;
- (void)setupSkylightView;
- (void)setupConcernFeedController;
- (void)setupPullRefreshView;
- (void)setLiveSkylightViewModel:;
- (id)liveSkylightViewModel;
- (void)setLiveSkylightViewController:;
- (Class)concernControllerClass;
- (id)createViewControllerWithFactoryClass:groupID:;
- (BOOL)getIsDisplayingProgressView;
- (void)setConcernFeedTableVC:;
- (void)setSelectedGroupControllerModel:;
- (void)setConcernFeedViewModel:;
- (void)addToContentViewWithGroupController:;
- (void)loadPreloadColdStartMetric:;
- (void)splashViewDidDisappear:;
- (void)onAwemeDeleteNotification:;
- (void)onNavigationBarSearchButtonClick;
- (void)triggerPullRefreshCompletion:;
- (void)setVerticalPanActive:;
- (void)setPullRefreshView:;
- (long long)skylightActualLiveCount;
- (id)concernFeedViewModel;
- (void)trackAccuracyCheck;
- (void)setHasSkylightFirstFetched:;
- (void)skylightRequestData;
- (void)updatePrfPageLoadExtra;
- (void)updatePrfPageLoadWhenHitCache;
- (BOOL)shouldBackgroundPlayAudio;
- (BOOL)shouldBackgroundPlay;
- (id)pullRefreshView;
- (BOOL)hasSkylightFirstFetched;
- (void)skylightAutoRefreshWithIsSlient:;
- (id)groupControllerClasses;
- (id)findViewControllerInGroupControllerModelsWithActionType:groupID:;
- (Class)findGroupFactoryWithActionType:;
- (BOOL)canReactToPullRefresh;
- (id)removeGroupControllerModelWithKeepActionType:;
- (void)setGroupControllerModels:;
- (void)updateSkylightCapsuleView:;
- (void)setTapticEngineTapped:;
- (BOOL)tapticEngineTapped;
- (void)updateNavigationBarTitleOffset:;
- (void)resetNavigationBarTitleCompletion:;
- (void)dismissProgressView:;
- (void)updateRecommendCardWithLiveExsit:;
- (BOOL)getIsInsertLogicExist;
- (id)padSplitScreenFeedTableViewController;
- (void)updateSkylightlayout;
- (double)getTableViewTopOffsetWhenOpenSkyLightView;
- (double)capsuleViewTopOffsetYWithSkylightClose;
- (id)getGroupConrollerModelWithActionType:groupID:;
- (BOOL)getCanReuseWithActioType:;
- (void)updateLayoutWithSkylightHeight:;
- (long long)skylightTotalCount;
- (id)skylightUnreadData;
- (void)setGroupControllerClasses:;
- (void)setConcernControllerClass:;
- (BOOL)verticalPanActive;
- (void)setScrollEnabled:;
- (void)viewWillDisappear:;
- (BOOL)isPlaying;
- (void)dealloc;
- (void)play;
- (void)setVolume:;
- (id)progressView;
- (void)viewDidLayoutSubviews;
- (void)addObserver;
- (void)viewDidLoad;
- (void)reload;
- (id)contentView;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)appWillResignActive:;
- (long long)type;
- (void)viewDidDisappear:;
- (void)setProgressView:;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:;
- (void)appDidBecomeActive:;
- (void).cxx_destruct;
- (void)setContentView:;
- (BOOL)refreshWithCompletion:;
- (void)viewDidAppear:;
- (BOOL)isActive;
- (void)stop;
- (void)pause;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)currentInteractionController;
- (long long)refreshState;
- (void)setupUI;
- (id)currentViewController;
- (void)handlePanGesture:;
- (BOOL)isViewAppearing;
- (void)setupNavigationBar;
- (void)setupContentView;
- (void)setRequestMethod:;
+ (Class)aAWEPadModuleAdapterClass;
+ (void)_aweLazyRegisterLoad;
@end
