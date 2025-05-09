@interface AWENearbyFullScreenViewController : UIViewController
@property (nonatomic) AWENearbySkylightGestureGuideView sklightGestureGuideView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isHadViewDidLoad;
@property (nonatomic) BOOL viewDidAppearOnce;
@property (nonatomic) NSString btmSourceToken;
@property (nonatomic) q refreshState;
@property (nonatomic) Q slidePanType;
@property (nonatomic) <AWEFeedRefreshAnimationProtocol> refreshAnimation;
@property (nonatomic) BOOL willAppear;
@property (nonatomic) BOOL willAppearOnce;
@property (nonatomic) BOOL isRightSlide;
@property (nonatomic) Q slideDirection;
@property (nonatomic) BOOL loadmoreNoMatchFilterRefreshLock;
@property (nonatomic) AWEBinding feedNoMatchFilterRequestBinding;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString previousReferString;
@property (nonatomic) BOOL isFeedInNearbyTab;
@property (nonatomic) BOOL willRefreshNearbyData;
@property (nonatomic) BOOL showSkylightByRefreshWhenNearbyAppear;
@property (nonatomic) BOOL didAppear;
@property (nonatomic) BOOL enterNearbyFromTabChange;
@property (nonatomic) BOOL skylightOpenBySettingsRefresh;
@property (nonatomic) AWEPageContext currentCellPlayInteractionContext;
@property (nonatomic) @? playInteractionContextHandle;
@property (nonatomic) BOOL hasSetupUI;
@property (nonatomic) BOOL isClickCapsuleView;
@property (nonatomic) BOOL didLaunchForUndertake;
@property (nonatomic) BOOL isHalfScreenShowing;
@property (nonatomic) UIImageView headAreaImageView;
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) AWEGradientView tabbarMaskView;
@property (nonatomic) UIView feedScaleView;
@property (nonatomic) UITableViewCell firstTableViewCell;
@property (nonatomic) UIImageView feedVeinView;
@property (nonatomic) AWENearbyTransformerAnimationView transformerAniationGuideView;
@property (nonatomic) UIView videoTagView;
@property (nonatomic) UILabel videoTagLabel;
@property (nonatomic) NSString lastHalfScreenViewID;
@property (nonatomic) AWENearbyWidgetViewController widgetViewController;
@property (nonatomic) AWENearbySubPageUndertakeManager subPageManager;
@property (nonatomic) Q halfScreenStyle;
@property (nonatomic) AWENearbySwitchContext switchContext;
@property (nonatomic) BOOL needTryShowGuideAnimate;
@property (nonatomic) BOOL needTryShowSwitchBtnGuideAnimate;
@property (nonatomic) AWENearbyPageContext pageContext;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL isMoveGuideShowed;
@property (nonatomic) BOOL isOfflineShowed;
@property (nonatomic) BOOL isMoveGuideShowing;
@property (nonatomic) BOOL isSkyLightAnimating;
@property (nonatomic) BOOL isCurrentTransformerCache;
@property (nonatomic) AWENearbySkyLightViewController skyLightViewController;
@property (nonatomic) UIViewController<AWEFeedTableViewControllerProtocol><AWEFeedTabItemViewControllerProtocol><AWEFeedViewControllerSwitchProtocol> feedTableViewController;
@property (nonatomic) AWENearbySkyLightCapsuleView capsuleView;
@property (nonatomic) AWENearbySkyLightCatchView catchView;
@property (nonatomic) AWENearbySkyLightAnchorContainerView anchorContainerView;
@property (nonatomic) UIPanGestureRecognizer transformerPanGestureRecognizer;
@property (nonatomic) AWENearbySkylightPanGestureGuideView transformerPanGestureGuideView;
@property (nonatomic) UIView feedMaskView;
@property (nonatomic) <AWEXTabBaseChannelControllerProtocol> channelController;
@property (nonatomic) <AWENearbyVcProtocol> delegate;
@property (nonatomic) <AWENearbyThemeStyleProtocol> themeDelegate;
@property (nonatomic) <AWERouterViewControllerProtocol><AWEFeedTabItemViewControllerProtocol><AWENewNearbyViewControllerProtocol><AWEViewControllerProtocol><AWEXTabChildViewControllerProtocol><AWENearbyContainerProtocol> parent;
@property (nonatomic) @? initFetchBlock;
@property (nonatomic) NSString customRefreshEnterMethod;
@property (nonatomic) BOOL isTopBarLightWithActivity;
@property (nonatomic) AWENearbyFullScreenViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q type;
@property (nonatomic) double transformersViewVisiableHeight;
- (BOOL)canRefresh;
- (id)referString;
- (void)transition_didPopDoneTransitionWithContext:;
- (BOOL)configWithRouterParamDict:;
- (void)pauseWithAnimation;
- (void)playWithAnimation;
- (void)playerDidReadyForDisplay:;
- (void)player:didChangePlaybackStateWithAction:;
- (void)setReferString:;
- (BOOL)isVideoRelatedPanelShowing;
- (BOOL)isRelatedVideoPanelShowing;
- (void)transition_didStartTransitionWithContext:;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (id)currentAweme;
- (id)currentVideoController;
- (void)cancelRefresh;
- (BOOL)currentTabIsTop;
- (BOOL)isCommentPanelShowing;
- (BOOL)isLikeUserPanelShowing;
- (void)onAwemeDeleted:isDislike:;
- (BOOL)isAITextPanelShowing;
- (id)transition_destinatedViewControllerForSlideDirection:gestureRecognizer:;
- (void)animatedRefreshWithCompletion:;
- (void)onAwemeMarkDislikeCanWithdraw:;
- (void)onAwemeDeleted:isLiveFinish:isDislike:;
- (double)getPlayTimeStamp;
- (void)setRefreshMethod:;
- (id)currentAwemeID;
- (id)currentAwemeAuthorID;
- (BOOL)onSegmentRepeatedClickWithIndex:;
- (id)channelController;
- (void)setChannelController:;
- (id)xtabFeedTableViewController;
- (BOOL)isSkyLightViewShowing;
- (unsigned long long)transition_destinatedType;
- (id)aAWEPadModuleAdapter;
- (id)modelForPlayer:;
- (void)requestLocationPermission;
- (BOOL)fullDetaillHalfScreenViewShowed;
- (BOOL)isHalfScreenShowing;
- (BOOL)refreshWithType:completion:;
- (id)refreshAnimation;
- (void)setRefreshAnimation:;
- (void)playIfActive;
- (BOOL)verticalPanGestureRecognizerShouldBegin:;
- (id)motionItemConfig;
- (BOOL)enableShake;
- (void)didReceiveShakeEvent:error:from:;
- (double)shakeTimeInterval;
- (long long)motionLevel;
- (void)setRefreshState:;
- (void)setChannelConfig:;
- (void)setupBinding;
- (id)anchorContainerView;
- (void)_windowDidBecomeKeyNotification:;
- (void)_windowDidResignKeyNotification:;
- (void)_onAwemeDeleteNotification:;
- (void)setDidAppear:;
- (void)updateSkylightCapsuleView:;
- (id)padSplitScreenFeedTableViewController;
- (BOOL)viewDidAppearOnce;
- (void)setViewDidAppearOnce:;
- (unsigned long long)halfScreenStyle;
- (void)setHalfScreenStyle:;
- (id)videoTagView;
- (void)setVideoTagView:;
- (id)feedTableViewController;
- (id)skyLightViewController;
- (id)catchView;
- (id)getHandleLeftSlideToUserTableVC;
- (BOOL)canShowLeftSlideToUserGuide;
- (void)setSkyLightViewController:;
- (void)setFeedTableViewController:;
- (void)setCatchView:;
- (void)setIsHalfScreenShowing:;
- (void)setupUILayout;
- (id)aAWEFlameHTSAdapter;
- (id)initFetchBlock;
- (void)setInitFetchBlock:;
- (void)setSlideDirection:;
- (unsigned long long)awe_fullScreenPopTransitionTriggerDirection;
- (BOOL)awe_fullScreenPopTransitionHideTabbarIfNeeded;
- (void)_splashViewDidDisappear:;
- (void)animatedRefreshWithType:completion:;
- (void)setSlidePanType:;
- (unsigned long long)slidePanType;
- (void)p_handleTabBarChange:;
- (unsigned long long)slideDirection;
- (id)nearbyIdentifier;
- (void)observeTransformersViewVisiableHeightChange:;
- (void)updateRefreshTypeWithTrigger:;
- (void)saveRequestParamsFromPush:freshType:;
- (void)selectTab;
- (void)selectCity;
- (unsigned long long)nearbyListType;
- (void)onFeedSwitchToNearbyWithModel:;
- (void)onFeedLeaveFromNearbyWithModel:;
- (void)updatePreviousPageContext:;
- (double)transformersViewVisiableHeight;
- (id)customRefreshEnterMethod;
- (void)setCustomRefreshEnterMethod:;
- (void)setScrollViewContentInsetAdjustmentBehavior:;
- (id)videoTagLabel;
- (void)setAnchorContainerView:;
- (id)initWithPageContext:;
- (void)player:didChangePlaybackStateWithState:;
- (double)p_getSkyLightOffsetYInXTab;
- (void)setVideoTagLabel:;
- (void)nearbyResourceResponse:refreshType:pageType:resourceTypes:;
- (void)handleUndertakeWithTransformerParams:halfScreenModel:;
- (void)setLastHalfScreenViewID:;
- (void)updateAngleTargetView:;
- (BOOL)startTransformerUpdateAnimationWithViewID:transformerUpdateInfo:;
- (id)lastHalfScreenViewID;
- (id)halfScreenBeforeShowHandlerWithHalfScreenModel:transformerInfo:;
- (id)halfScreenShowCompletionWithHalfScreenModel:transformerInfo:;
- (id)halfScreenCloseHandlerWithHalfScreenModel:transformerInfo:;
- (void)useCacheLocationPreLoadHalfScreen;
- (void)setIsTopBarLightWithActivity:;
- (BOOL)desktopChannelGuideShouldAvoid;
- (id)btmSourceToken;
- (void)trackEnterNearbyLifePage;
- (id)containerCurrentAwemeModel;
- (void)nearbyAnimatedRefreshWithCompletion:;
- (void)animateInsertContainerAwemeModel:index:insertType:;
- (void)deleteAwemes:;
- (id)currentBgImage;
- (id)currentBgFrame;
- (void)updateCitySelectText:;
- (void)nearbyViewWillTransitionToSize:withTransitionCoordinator:;
- (void)cityWillChange;
- (void)didLocationPermissionWithModel:status:error:;
- (void)setWidgetViewController:;
- (id)headAreaImageView;
- (BOOL)isTopBarLightWithActivity;
- (void)creatWidgetModelWithResponse:;
- (void)setBtmSourceToken:;
- (void)shouldPauseNearbyVideoWithID:pause:;
- (id)isSchemaInsertLiveUndeTake;
- (void)setHeadAreaImageView:;
- (BOOL)needTryShowSwitchBtnGuideAnimate;
- (void)setNeedTryShowSwitchBtnGuideAnimate:;
- (void)hideLiveSmallScreen;
- (id)subPageManager;
- (void)setSubPageManager:;
- (id)getLiveSmallWindowManger;
- (void)openHalfScreenDialog:;
- (void)publishEventNearbyQueryHalfScreenParam;
- (id)constData;
- (void)willSwitchChannel:;
- (void)didSwitchChannel:;
- (void)willEndSwitchChannel;
- (void)didEndSwitchChannel;
- (void)willStartAnimation;
- (void)setSwitchContext:;
- (id)switchContext;
- (void)__didLivePlayAlreadyEnd:;
- (void)updateSkylightFeedParamsWithParams:;
- (void)refreshNearbyFeed;
- (void)__handleTransformerGesture:;
- (void)setTransformerPanGestureRecognizer:;
- (id)transformerPanGestureRecognizer;
- (void)__updateTransformerGestureBeginState;
- (double)skylightOriginHeight;
- (id)transformerPanGestureGuideView;
- (void)__updateSubViewsWithPanGestureTranslationY:;
- (void)__updateSubviewsWhenPanGestureEnd;
- (void)__updateFeedUIBeautifyStyleWithTranslationY:;
- (void)setTransformerPanGestureGuideView:;
- (id)feedMaskView;
- (id)__videoTransformWithTranslationY:skylightHeight:;
- (id)sklightGestureGuideView;
- (void)__showDimaondGestureGuideIfNeeds;
- (void)setSklightGestureGuideView:;
- (void)setupTransformerPanGestureRecognizer;
- (void)resetTransformerPanGestureIfNeeds;
- (void)starTransformerPanGestureGuideIfNeeds;
- (void)removeTransformerPanGestureGuideIfNeeds;
- (void)insertDCardIntoNearbyFeed:customInfo:complete:;
- (void)configListDataBind;
- (BOOL)isHadViewDidLoad;
- (void)setIsHadViewDidLoad:;
- (void)__viewDidLoad;
- (void)dataControllerPreInit;
- (void)__addPureLiveNotification;
- (void)p_handleFeedContainerIndexChange:;
- (void)__tableViewCellWillDisplayWithNoti:;
- (void)__addFeedVideoPlayPeriodObserver;
- (void)setWillAppearOnce:;
- (void)__showGuideIfNeed;
- (void)refreshSettingsOrOpenSkylightIfNeeded;
- (void)didSkyLightTransformerReady:;
- (BOOL)needTryShowGuideAnimate;
- (void)setNeedTryShowGuideAnimate:;
- (void)showDesktopGuide;
- (void)__handleTransformerGuideAnimationCompletionIfNeedsWithInterruptd:shouldPlayFeed:;
- (void)p_trackLeaveHomepageWithLandingPage:;
- (void)setIsFeedInNearbyTab:;
- (void)setPreviousReferString:;
- (void)__leaveNearbyWithTabChangeReferString:videoIndex:;
- (void)setEnterNearbyFromTabChange:;
- (void)__configWidgetWithModel:;
- (void)configNavViewAlpha:transform:shouldShowSide:;
- (void)__updateCapsuleViewHidden;
- (void)__updateHasNoneAnimationSubviewsState;
- (void)__skylightDidTransformerCardShow:;
- (void)__skylightClickSwitchBtn:;
- (void)__skylightSwitchBtnDidAppear;
- (void)__skylightWillOpen;
- (BOOL)isCurrentTransformerCache;
- (void)setIsClickCapsuleView:;
- (void)__jumpToPOIDetailFromSkyLightAnchor;
- (id)tabbarMaskView;
- (void)setHasSetupUI:;
- (void)setupBinding_ListData;
- (void)setupBinding_ListStatus;
- (void)setupBinding_PageControl;
- (void)setupBinding_LocationPermission;
- (void)setupBinding_TransformerSettingsData;
- (void)setupBinding_Skylight;
- (void)setupBinding_ShopCard;
- (void)setupBinding_Xtab;
- (void)setIsCurrentTransformerCache:;
- (id)clientShowParamsWithAweme:;
- (void)__updateBacgroundImageViewWithSettingResponse:;
- (id)__getSkylightShowParamsWithIsClickCapsule:isRefresh:;
- (void)setSkylightOpenBySettingsRefresh:;
- (void)__handleSkylightWithShowType:fromStatus:animated:;
- (void)__refreshSkylightFrame;
- (void)__updateHeadAreaBackgroundIfNeededWithSettingsResponse:;
- (void)__shouldPureLive;
- (BOOL)isSkyLightOpen;
- (void)__setLiveCellPureMode:;
- (BOOL)shouldHiddenCapsuleView;
- (void)__showSkyLightWithShowtype:fromStatus:animated:;
- (void)setShowSkylightByRefreshWhenNearbyAppear:;
- (void)__changeXtabModelFullScreenStatus:;
- (void)__showSkyLightWithStatus:fromStatus:animated:;
- (BOOL)skylightOpenBySettingsRefresh;
- (BOOL)isClickCapsuleView;
- (id)__getSkylightShowParamsWithIsClickCapsule:;
- (void)__updateSkyLightShowWithStatus:fromStatus:animated:params:;
- (void)__openSkyLightFromStatus:animated:params:;
- (void)__closeSkyLightFromStatus:animated:;
- (double)__skylightHeight;
- (void)__openSkyLightWithAnimationFromStatus:needShowTransformerAnimationGuide:params:animated:;
- (void)__updateHasAnimationSubviewsDefaultConstraints;
- (void)__updateFeedUIBeautifyStyleWithStatus:animated:;
- (void)__updateWidgetPositionIfNeededWithSkylightOpening:;
- (void)setIsSkyLightAnimating:;
- (void)__openSkylightWithPushAnimationWithCompletion:;
- (void)__startTransformerGuideAnimation;
- (void)setTransformerAniationGuideView:;
- (id)transformerAniationGuideView;
- (id)feedVeinView;
- (void)__closeSkyLightFromStatusWithAnimated:;
- (void)__closeSkylightWithCapsuleAnimationWithCompletion:;
- (void)__exchangeSkylightAndFeedViewIndex;
- (void)__startCloseSkylightWithCapsuleAnimationWithMaskEndFrame:completion:;
- (id)feedScaleView;
- (void)__scaleFeedWithAnimated:;
- (void)__updateFeedUIBeautifyStyleInNoSkylightStatusWithAnimated:;
- (void)__updateFeedTableViewControllerHasCovered;
- (id)aAWENearbyFullScreenViewControllerCommonAdapter;
- (BOOL)loadmoreNoMatchFilterRefreshLock;
- (void)setLoadmoreNoMatchFilterRefreshLock:;
- (id)getNotNilStringWithOriginString:;
- (id)previousReferString;
- (void)__showPolLandingGuideWithLottiePath:;
- (void)showMoveGuideViewWhenTransformerRenderCompletedWithTriggerType:;
- (void)tryShowSwitchBtnFirstGuide;
- (void)showMoveGuideViewWithTriggerType:transformerOfflineType:;
- (void)showTransformerOfflineGuideViewWithTriggerType:transformerOfflineType:;
- (BOOL)isMoveGuideShowed;
- (void)setIsMoveGuideShowed:;
- (void)sendImpressionWithFirstGuideModel:;
- (id)getMoveCanShowBlkWithTriggerType:guideType:;
- (id)getBeginShowBlkWithFirstGuideModel:Banner:;
- (id)getJumpBlkWithFirstGuideModel:transformerOfflineType:;
- (id)getDismissBlkWithFirstGuideModel:isOffline:;
- (BOOL)isOfflineShowed;
- (BOOL)checkChannelMoveCanShow:settingsDataFrom:triggerType:guideType:;
- (void)setIsMoveGuideShowing:;
- (void)setIsOfflineShowed:;
- (BOOL)isSkyLightAnimating;
- (void)showHalfScreenIfNeedWithHalfScreenModel:transformerParams:;
- (void)shouldShowSmallScreenWithRoomID:customSchema:scene:;
- (BOOL)enterNearbyFromTabChange;
- (void)refreshSettingsOrOpenSkylightIfNeededFromTabChange:;
- (BOOL)showSkylightByRefreshWhenNearbyAppear;
- (BOOL)willRefreshNearbyData;
- (void)setWillRefreshNearbyData:;
- (BOOL)hasSetupUI;
- (BOOL)isMoveGuideShowing;
- (id)currentCellPlayInteractionContext;
- (id)playInteractionContextHandle;
- (void)setPlayInteractionContextHandle:;
- (void)setCurrentCellPlayInteractionContext:;
- (id)currentFeedPlayInteractionContext;
- (void)setFeedScaleView:;
- (id)firstTableViewCell;
- (void)setFirstTableViewCell:;
- (BOOL)isFromNearby:;
- (void)dismissSkyLight;
- (void)setViewControllerScrollEnable:;
- (BOOL)douyinCanShowSkyLightInNearby;
- (BOOL)douyinHtsCanShowSkyLightInNearby;
- (void)p_handleXTabChange:;
- (id)__scaleImage:toScale:;
- (BOOL)__canShowSkyLightInNearby;
- (void)__clearFilterRefreshIfNeedWithOffset:;
- (BOOL)isLiveSmallWindowShowingAtNearby;
- (void)xTabChannelDidFinishUpdate;
- (void)removeSkylightFeedParamsWithParamsKey:;
- (void)updateXTabLineView:;
- (void)tryToCleanDCard:;
- (void)animateInsertContainerAwemeModel:index:allowApendMax:insertType:;
- (BOOL)willAppearOnce;
- (BOOL)isRightSlide;
- (void)setIsRightSlide:;
- (id)feedNoMatchFilterRequestBinding;
- (void)setFeedNoMatchFilterRequestBinding:;
- (BOOL)isFeedInNearbyTab;
- (BOOL)didLaunchForUndertake;
- (void)setDidLaunchForUndertake:;
- (void)setTabbarMaskView:;
- (void)setFeedVeinView:;
- (void)setFeedMaskView:;
- (void)setScrollEnabled:;
- (void)setIsScrolling:;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillDisappear:;
- (void)setParent:;
- (void)dealloc;
- (void)play;
- (id)delegate;
- (id)capsuleView;
- (id)store;
- (id)contentOffset;
- (id)parent;
- (id)displayString;
- (void)applicationDidEnterBackground;
- (id)viewModel;
- (id)widgetViewController;
- (void)viewDidLoad;
- (void)reload;
- (BOOL)gestureRecognizerShouldBegin:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)viewDidDisappear:;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:;
- (void)setViewModel:;
- (BOOL)didAppear;
- (void).cxx_destruct;
- (void)applicationWillTerminate;
- (void)viewDidAppear:;
- (BOOL)isScrolling;
- (void)setDelegate:;
- (BOOL)isActive;
- (void)setCapsuleView:;
- (void)stop;
- (id)backgroundImageView;
- (void)pause;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)currentInteractionController;
- (long long)refreshState;
- (void)_appWillResignActive:;
- (void)setupUI;
- (void)setBackgroundImageView:;
- (void)setThemeDelegate:;
- (id)themeDelegate;
- (BOOL)willAppear;
- (void)setPageContext:;
- (id)pageContext;
- (void)setWillAppear:;
- (void)_appDidBecomeActive:;
+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEFlameHTSAdapterClass;
+ (void)pauseNearbyVideoWithID:pause:;
+ (Class)aAWENearbyFullScreenViewControllerCommonAdapterClass;
@end
