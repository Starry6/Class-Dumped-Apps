@interface AWEDPlayerFeedPlayerViewController : UIViewController
@property (nonatomic) BOOL isAutoPlay;
@property (nonatomic) BOOL isFinishPlay;
@property (nonatomic) UIViewController<AWEDPlayerProtocol> generalPlayer;
@property (nonatomic) AWEDPlayerConfig generalPlayerConfig;
@property (nonatomic) LOTAnimationView coverLottieView;
@property (nonatomic) UIView videoDeletedView;
@property (nonatomic) AWEAwemeModel repostItem;
@property (nonatomic) AWEAwemePlayVideoPauseIcon pauseIcon;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) BOOL usingPreloaded;
@property (nonatomic) BOOL shouldPreventPlay;
@property (nonatomic) NSNumber fromSlideUp;
@property (nonatomic) BOOL isInVideoPlayOverState;
@property (nonatomic) UIView topGradientView;
@property (nonatomic) UIView bottomGradientView;
@property (nonatomic) UIImageView bottomMaskImageView;
@property (nonatomic) UIView gradientBackgroundView;
@property (nonatomic) UIView coverTopGradientView;
@property (nonatomic) UIView coverBottomGradientView;
@property (nonatomic) <AWELiveReplayServiceManagerInterface> liveReplayInteractionManager;
@property (nonatomic) BOOL pinching;
@property (nonatomic) <AWEAwemePlayVideoBaseContainer> baseContainerDelegate;
@property (nonatomic) <AFDPureModePageInteractionProtocol> pureModePageInteractionDelegate;
@property (nonatomic) <AWEPlayVideoDelegate> playerDelegate;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) <IESVideoPlayerProtocol> playerController;
@property (nonatomic) q playState;
@property (nonatomic) q loopTimes;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic) double totalPlayTime;
@property (nonatomic) double playStartTimestamp;
@property (nonatomic) NSNumber videoDuration;
@property (nonatomic) double defaultSeekToTime;
@property (nonatomic) q coverContentMode;
@property (nonatomic) BOOL shouldAdaptFullScreen;
@property (nonatomic) BOOL isInBackgroundPlayMode;
@property (nonatomic) BOOL needCorrectPlayStateWhenPlaybackStateChanged;
@property (nonatomic) q audioSessionInterruptionStrategy;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString reactId;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) NSNumber slideType;
@property (nonatomic) NSString adEventName;
@property (nonatomic) NSDictionary adExtraData;
@property (nonatomic) NSString ruleId;
@property (nonatomic) NSNumber clickEnter;
@property (nonatomic) NSNumber usingLogExtraDictEnterMethod;
@property (nonatomic) NSNumber forceUsingLogExtraDictEnterMethod;
@property (nonatomic) BOOL hasReportClickEnter;
@property (nonatomic) NSDictionary context;
@property (nonatomic) NSString originEntryEnterMethod;
@property (nonatomic) NSString searchVideoMethod;
@property (nonatomic) BOOL isPlayerInStall;
@property (nonatomic) UIView loadingView;
@property (nonatomic) BOOL isScrolledAutomatically;
@property (nonatomic) BOOL isPlayStarted;
@property (nonatomic) NSString pageType;
@property (nonatomic) NSString cityInfoString;
@property (nonatomic) q playType;
@property (nonatomic) ^{EngineAudioWrapper=^?^?^?^?^v} audioWrapper;
@property (nonatomic) ^{EngineVideoWrapper=^?^?^v} videoWrapper;
@property (nonatomic) <ALMVideoPlayerAudioWrapperProtocol> audioWrapperV2;
@property (nonatomic) <AWEPlayVideoViewControllerContainerProtocol> container;
@property (nonatomic) BDSimPlayerMediaViewController simPlayerMediaVC;
@property (nonatomic) double landScapeStartTimestamp;
@property (nonatomic) double speedStartTimestamp;
@property (nonatomic) double speedModeStartNewTimestamp;
@property (nonatomic) BOOL hasInlandscape;
@property (nonatomic) BOOL hasShownDisconnectToast;
@property (nonatomic) AWEVideoBSModel bsModel;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL useNormalCover;
@property (nonatomic) BOOL disableCoverPlaceholder;
@property (nonatomic) BOOL coverImageLoaded;
@property (nonatomic) BOOL enableHDR;
@property (nonatomic) NSArray playURLs;
@property (nonatomic) BOOL holdStopping;
@property (nonatomic) BOOL hadAdjustedWithHDR;
@property (nonatomic) BOOL forceUsePlayerVideoPlayEndTracker;
@property (nonatomic) BOOL fixVideoPlayFinishTrack;
@property (nonatomic) <AWEPlayVideoVCDataSourceProtocol> dataSourceDelegate;
@property (nonatomic) BOOL hasResetDynamicBlurViewSize;
@property (nonatomic) <ALMIESVideoPlayerExtraViewProtocol> topGauissianBlurView;
@property (nonatomic) <ALMIESVideoPlayerExtraViewProtocol> bottomGaussianBlurView;
@property (nonatomic) <ALMIESVideoPlayerExtraViewProtocol> firstFrameBackgroundView;
@property (nonatomic) BOOL needsRespondingToVideoResourceRecall;
@property (nonatomic) NSNumber detailSlide;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL isIndividualPlay;
@property (nonatomic) BOOL isPrepared;
@property (nonatomic) <AWEPlayVideoViewControllerDelegate> delegate;
@property (nonatomic) @? playerFinishedPlayingBlock;
@property (nonatomic) <AWEPlayVideoViewControllerStatusDelegate> statusDelegate;
@property (nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> playerViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL shouldPrepareForDisplay;
@property (nonatomic) BOOL pauseBySingleClick;
@property (nonatomic) BOOL isAdOperationShowing;
@property (nonatomic) BOOL noNeedCreatePlayer;
@property (nonatomic) BOOL needCorrectPauseIconFrame;
@property (nonatomic) AWEDPlayerComponentManager componentManager;
@property (nonatomic) BOOL forceDisableVideoViewUp;
@property (nonatomic) UIViewController<AWEDPlayerVideoPlayerDelegate> DPlayerDelegate;
@property (nonatomic) <AWEAwemePlayInteractionPlayDelegate><AWEAwemePlayInteractionPanelDelegate><AWEAwemePlayInteractionCommerceDelegate><AWEAwemePlayInteractionUpdateDelegate><AWEPlayInteractionBizControllerProtocol> interactionDelegate;
@property (nonatomic) <AWEPlayInteractionViewControllerNewProtocol> interactionNewDelegate;
@property (nonatomic) <IESVideoPlayerDelegate> videoPlayerDelegate;
@property (nonatomic) @? playVideo;
@property (nonatomic) BOOL disableTrackerService;
@property (nonatomic) BOOL needToPauseLive;
@property (nonatomic) @? willLoopPlaying;
@property (nonatomic) @? playbackStateDidChange;
@property (nonatomic) BOOL shouldAdaptFullScreenThree;
@property (nonatomic) @? trackAwemePlayTime;
@property (nonatomic) NSDictionary btmInfo;
@property (nonatomic) UIView contentView;
- (void)setVideoControllerPlaybackRate:;
- (id)reactId;
- (void)setReactId:;
- (id)cityInfoString;
- (void)setCityInfoString:;
- (id)originEntryEnterMethod;
- (void)setOriginEntryEnterMethod:;
- (id)trackAwemePlayTime;
- (void)setTrackAwemePlayTime:;
- (void)setLogExtraDict:;
- (id)referString;
- (void)setEnterFrom:;
- (void)pauseWithAnimation;
- (void)playWithAnimation;
- (BOOL)holdStop;
- (BOOL)holdStopAsync:;
- (void)setTTVideoEngineResolutionType:;
- (void)player:playbackFailedWithError:;
- (void)playerDidReadyForDisplay:;
- (void)player:didChangePlaybackStateWithAction:;
- (void)setPlayerResolution:completion:;
- (id)supportedResolutionTypes;
- (void)playerWillLoopPlaying:;
- (void)setReferString:;
- (id)logExtraDict;
- (BOOL)shouldAdaptFullScreenThree;
- (void)setShouldAdaptFullScreenThree:;
- (void)updatePlayerIfNeeded;
- (BOOL)usingPreloaded;
- (void)setUsingPreloaded:;
- (id)fromSlideUp;
- (void)setFromSlideUp:;
- (void)prepareForDisplayWithoutCoverImage;
- (BOOL)pauseIfNotStop;
- (double)defaultSeekToTime;
- (void)setPlayerSeekTime:completion:;
- (void)resetPauseIcon;
- (void)setShouldPreventPlay:;
- (BOOL)shouldPreventPlay;
- (void)showPauseIcon;
- (void)pauseWithAnimationUsingCustomPauseIcon:;
- (BOOL)videoIsPlayStarted;
- (void)setNeedCorrectPauseFrame:;
- (void)setPauseHidden:;
- (void)hidePauseIcon;
- (id)getVideoScreenShot;
- (id)repostModel;
- (id)repostFromModel;
- (id)getPlayModeWithAutoPlayMode;
- (id)playerExtraTrackInfo;
- (id)internalLogExtraDict;
- (id)adExtraData;
- (void)setAdExtraData:;
- (id)searchVideoMethod;
- (void)setSearchVideoMethod:;
- (BOOL)isInBackgroundPlayMode;
- (void)setIsInBackgroundPlayMode:;
- (BOOL)fixVideoPlayFinishTrack;
- (void)setFixVideoPlayFinishTrack:;
- (long long)playerTrackerDisableOptions;
- (void)setPlayerTrackerDisableOptions:;
- (id)playerSpeedModePlayTimeTrackParams;
- (void)setPlayerSpeedModePlayTimeTrackParams:;
- (double)systemVolumeWhenStartPlay;
- (void)usingLogExtraEnterMethod:;
- (BOOL)forceUsePlayerVideoPlayEndTracker;
- (void)setForceUsePlayerVideoPlayEndTracker:;
- (long long)loopTimes;
- (double)totalPlayTime;
- (double)playStartTimestamp;
- (long long)coverContentMode;
- (void)setCoverContentMode:;
- (BOOL)shouldAdaptFullScreen;
- (void)setShouldAdaptFullScreen:;
- (BOOL)useNormalCover;
- (void)setUseNormalCover:;
- (BOOL)isScrolledAutomatically;
- (void)setIsScrolledAutomatically:;
- (void)setBgAutoPlayNextDelegate:;
- (void)setEnableBackgroundPlay:;
- (BOOL)enableBackgroundPlay;
- (BOOL)forbidResumePlayFromBackground;
- (BOOL)isBackgroundPlaying;
- (void)activatePlayAnimation;
- (void)updatePlayerController:withPlayVideoVC:;
- (BOOL)isAutoPlaying;
- (void)recreatePlayerAndPrepare;
- (void)resetScalingMode;
- (BOOL)pauseBySingleClick;
- (void)setPauseBySingleClick:;
- (void)changePlayerDelegate:;
- (void)updatePauseBySingleClick:;
- (void)updateShouldAdaptFullScreen:;
- (void)updatePlayerBackgroundViewIfNeededWhenLandscape:fromHomepageHot:;
- (void)removePlayerBackgroundViewIfNeeded;
- (id)getPlayerBackgroundView;
- (BOOL)shouldResponseTapEventOnLocation:;
- (void)tappedInteractionViewOnLocation:;
- (void)activatePauseAnimation;
- (void)playOrResumeVideo:;
- (id)audioWrapper;
- (void)setAudioWrapper:;
- (id)videoWrapper;
- (void)setVideoWrapper:;
- (id)clickEnter;
- (void)setClickEnter:;
- (id)slideType;
- (void)setSlideType:;
- (id)detailSlide;
- (void)setDetailSlide:;
- (BOOL)hasReportClickEnter;
- (void)setHasReportClickEnter:;
- (id)enterFrom;
- (id)adEventName;
- (void)setAdEventName:;
- (void)setDefaultSeekToTime:;
- (id)usingLogExtraDictEnterMethod;
- (void)setUsingLogExtraDictEnterMethod:;
- (id)playerDelegate;
- (void)setPlayerDelegate:;
- (id)videoPlayerDelegate;
- (void)setVideoPlayerDelegate:;
- (id)baseContainerDelegate;
- (void)setBaseContainerDelegate:;
- (id)pureModePageInteractionDelegate;
- (void)setPureModePageInteractionDelegate:;
- (BOOL)shouldPrepareForDisplay;
- (void)setShouldPrepareForDisplay:;
- (BOOL)awe_play;
- (BOOL)forceDisableVideoViewUp;
- (id)interactionNewDelegate;
- (void)setInteractionNewDelegate:;
- (void)setShouldShowCoverWhenSeekToTime:;
- (double)customTimerPeriodic:;
- (id)playVideoViewController;
- (void)setComponentManager:;
- (id)aAWEPadModuleAdapter;
- (BOOL)isIndividualPlay;
- (void)setIsIndividualPlay:;
- (long long)currCacheSize;
- (double)currPlaybackTime;
- (id)videoDeletedView;
- (void)setVideoDeletedView:;
- (id)repostItem;
- (void)setRepostItem:;
- (id)coverImageView;
- (void)setCoverImageView:;
- (BOOL)isInVideoPlayOverState;
- (void)setIsInVideoPlayOverState:;
- (id)bottomMaskImageView;
- (void)setBottomMaskImageView:;
- (void)setGradientBackgroundView:;
- (id)coverTopGradientView;
- (void)setCoverTopGradientView:;
- (id)coverBottomGradientView;
- (void)setCoverBottomGradientView:;
- (BOOL)isAdOperationShowing;
- (void)setIsAdOperationShowing:;
- (BOOL)noNeedCreatePlayer;
- (void)setNoNeedCreatePlayer:;
- (BOOL)needCorrectPauseIconFrame;
- (void)setNeedCorrectPauseIconFrame:;
- (id)forceUsingLogExtraDictEnterMethod;
- (void)setForceUsingLogExtraDictEnterMethod:;
- (id)liveReplayInteractionManager;
- (id)pauseIconView;
- (void)setForceDisableVideoViewUp:;
- (void)setBottomGradientAlpha:duration:;
- (void)removeFromParentVC;
- (void)changePlayerFrameIfNeededWithAnimated:;
- (void)setGradientBackgroundViewAccessibilityEnable:;
- (double)topGradientHeight;
- (double)bottomGradientHeight;
- (void)hideGradientView;
- (void)showGradientView;
- (double)getBottomMaskImageHeight;
- (void)updatePlayerControllerFrame;
- (void)videoDidShrink;
- (void)videoDidMagnify;
- (void)playLoadingAnimation;
- (id)DPlayerDelegate;
- (void)setDPlayerDelegate:;
- (double)speedModeStartNewTimestamp;
- (void)setSpeedModeStartNewTimestamp:;
- (double)speedStartTimestamp;
- (void)setSpeedStartTimestamp:;
- (void)setPlayType:;
- (id)playerFinishedPlayingBlock;
- (void)setPlayerFinishedPlayingBlock:;
- (long long)audioSessionInterruptionStrategy;
- (void)setAudioSessionInterruptionStrategy:;
- (id)audioWrapperV2;
- (void)setAudioWrapperV2:;
- (double)landScapeStartTimestamp;
- (void)setLandScapeStartTimestamp:;
- (BOOL)isAppear;
- (void)setIsAppear:;
- (BOOL)hasShownDisconnectToast;
- (void)setHasShownDisconnectToast:;
- (id)bsModel;
- (void)setBsModel:;
- (BOOL)disableCoverPlaceholder;
- (void)setDisableCoverPlaceholder:;
- (BOOL)disableTrackerService;
- (void)setDisableTrackerService:;
- (BOOL)hasInlandscape;
- (void)setHasInlandscape:;
- (id)playURLs;
- (BOOL)needsRespondingToVideoResourceRecall;
- (void)setNeedsRespondingToVideoResourceRecall:;
- (BOOL)needToPauseLive;
- (void)setNeedToPauseLive:;
- (id)coverLottieView;
- (id)willLoopPlaying;
- (void)setWillLoopPlaying:;
- (BOOL)isPlayerInStall;
- (BOOL)isPlayStarted;
- (void)setIsPlayStarted:;
- (void)playerPrepareWithModel:;
- (void)trackVideoPauseEvent;
- (void)updateCoverImage;
- (BOOL)videoShouldPlay;
- (BOOL)alertIfNotValid;
- (void)trackVideoPlaySubTasksWithAttributes:;
- (id)getRepostItemFromSubclass;
- (id)getRepostFromAwemeForTrack;
- (id)getPlayExtraFromSubclass;
- (long long)scaleModeForVideo;
- (id)currentCoverImage;
- (id)getVideoLength;
- (id)playerTypeString;
- (id)localVideoURL;
- (void)triggerComponentActionAfter:block:;
- (void)anchorTriggerComponentActionBlock:;
- (id)realMediaFrame;
- (void)trackPlayTimeIfNeeded;
- (void)trackVideoPlayFinishEvent;
- (void)trackAlbumPlayFinishEvent;
- (void)trackVideoPlayEvent;
- (void)onAppllicationWillTerminate;
- (id)_getParamsForBSPredict;
- (void)setNormalClockType:;
- (void)_tracePlaybackSpeedInfo;
- (void)preloadPlayerWithModel:;
- (id)getBitrateGearNameSet;
- (void)videoSafetyCheckIfNeeded;
- (void)hideAllScreenAdaptationViewIfNeeded;
- (void)showAllScreenAdaptationViewIfNeeded;
- (void)resetSingleImageAlbumFinishFlag;
- (void)insertPlayerController:withPlayVideoVC:;
- (void)insertPlayerViewDidSuccess;
- (void)updateCoverImageStatus;
- (BOOL)isPlayerAttached;
- (void)updateVideoCallbackInterval:;
- (void)awe_doProfilePreloadWithModel:preloadTypes:res:;
- (void)awe_doNunkiPreloadProfile;
- (BOOL)awe_enableProfilePreload;
- (BOOL)forbidUpdatePlayer;
- (void)setForbidUpdatePlayer:;
- (double)currentPlayerPlaybackTime;
- (id)pauseIcon;
- (void)setPauseIcon:;
- (void)setModel:type:;
- (long long)bdMultiContent_GetCurrentPlayState;
- (BOOL)isVideoInvalid;
- (id)simPlayerMediaVC;
- (void)setSimPlayerMediaVC:;
- (id)generalPlayer;
- (void)setGeneralPlayer:;
- (long long)scaleModeForVideoWithPlayer:;
- (id)PiPContext;
- (void)registerPiPEventHandler:;
- (id)buildDPlayerConfig;
- (BOOL)adaptPad;
- (void)setCoverLottieView:;
- (void)setPinching:;
- (BOOL)coverImageLoaded;
- (id)generalPlayerConfig;
- (void)setGeneralPlayerConfig:;
- (void)addLogWithLevel:subModuleName:what:extra:;
- (void)addLogWithLevel:subModuleName:linkIDs:eventType:what:who:extra:;
- (void)setBottomImageMaskHidden;
- (id)bottomGradientColor_description;
- (void)handleVRHeadTrackingWhenShrink:;
- (void)_pauseWithAnimationUsingCustomPauseIcon:;
- (void)_playWithAnimation;
- (void)_pauseWithAnimation;
- (void)playTimeUpdate;
- (void)checkAdVideo;
- (void)_showLiveBubbleGuideIfNeed;
- (id)currentInteractionVC;
- (BOOL)isFinishPlay;
- (void)setIsFinishPlay:;
- (void)showNoWifiToastIfNeeded;
- (BOOL)handlePeriodicTimeObserver;
- (BOOL)isFromFullScreenFeedPage;
- (void)setPlayerComponentSeekTime:completion:;
- (BOOL)needCorrectPlayStateWhenPlaybackStateChanged;
- (void)setNeedCorrectPlayStateWhenPlaybackStateChanged:;
- (BOOL)holdStopping;
- (BOOL)hadAdjustedWithHDR;
- (void)setHadAdjustedWithHDR:;
- (BOOL)hasResetDynamicBlurViewSize;
- (void)setHasResetDynamicBlurViewSize:;
- (id)topGauissianBlurView;
- (void)setTopGauissianBlurView:;
- (id)bottomGaussianBlurView;
- (void)setBottomGaussianBlurView:;
- (id)firstFrameBackgroundView;
- (void)setFirstFrameBackgroundView:;
- (void)setModel:;
- (void)setContainer:;
- (id)container;
- (BOOL)isFullScreen;
- (void)viewWillDisappear:;
- (void)setStatusDelegate:;
- (id)init;
- (BOOL)isPlaying;
- (void)dealloc;
- (BOOL)isReadyForDisplay;
- (BOOL)play;
- (id)delegate;
- (void)setVolume:;
- (void)setPlaybackStateDidChange:;
- (void)viewWillLayoutSubviews;
- (void)setPlayerController:;
- (id)dataSourceDelegate;
- (void)setMuted:;
- (id)interactionDelegate;
- (void)viewDidLoad;
- (void)prepareForDisplay;
- (id)contentView;
- (id)loadingView;
- (void)setSubTitle:;
- (void)_reset;
- (void)setPageType:;
- (id)playerController;
- (long long)type;
- (BOOL)enableHDR;
- (void)viewDidDisappear:;
- (void)setInteractionDelegate:;
- (id)model;
- (BOOL)isPrepared;
- (void)setContext:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (id)videoDuration;
- (id)statusDelegate;
- (void)forwardInvocation:;
- (double)currentPlaybackTime;
- (void)viewDidAppear:;
- (void)reset;
- (id)playbackStateDidChange;
- (void)setDelegate:;
- (BOOL)isActive;
- (id)context;
- (BOOL)stop;
- (id)pageType;
- (id)playerViewController;
- (BOOL)pause;
- (BOOL)isPinching;
- (void)setPlayerViewController:;
- (id)bottomGradientColor;
- (void)setDataSourceDelegate:;
- (id)topGradientColor;
- (void)setIsFullScreen:;
- (id)bottomGradientView;
- (long long)playState;
- (void)setBottomGradientView:;
- (void)setPlayState:;
- (void)stopLoadingAnimation;
- (BOOL)isAutoPlay;
- (void)setIsAutoPlay:;
- (BOOL)pauseIfPlaying;
- (long long)videoSize;
- (void)setupModel:;
- (id)topGradientView;
- (void)setTopGradientView:;
- (void)willDisplay;
- (id)gradientBackgroundView;
- (id)playVideo;
- (unsigned long long)currentResolution;
- (id)ruleId;
- (void)setRuleId:;
- (long long)playType;
- (void)setIsPrepared:;
- (void)seekToTime:completion:;
- (id)componentManager;
+ (Class)aAWEPadModuleAdapterClass;
+ (long long)contentModeForVideo:;
+ (id)modelForPlayer:;
+ (id)referStringForPlayer:;
+ (long long)playState:;
@end
