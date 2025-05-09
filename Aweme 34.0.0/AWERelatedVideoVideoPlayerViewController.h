@interface AWERelatedVideoVideoPlayerViewController : UIViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol><AWEAwemeBizPlayVideoProtocol><AWEPlayVideoViewControllerProtocol> playerViewController;
@property (nonatomic) AWERelatedVideoControlView optimizeControlView;
@property (nonatomic) UITapGestureRecognizer tap;
@property (nonatomic) UITapGestureRecognizer doubleTap;
@property (nonatomic) BOOL isSliding;
@property (nonatomic) TTVideoEngineModel engineModel;
@property (nonatomic) UIImage engineBigImage;
@property (nonatomic) BOOL isQuiet;
@property (nonatomic) BOOL feedMode;
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) double videoStartInterval;
@property (nonatomic) BOOL tapProgressTraceLock;
@property (nonatomic) NSMutableArray seekDurationList;
@property (nonatomic) NSDictionary trackVideoPlayEndParams;
@property (nonatomic) BOOL requestBigThumb;
@property (nonatomic) BOOL hasShownReminderView;
@property (nonatomic) BOOL userCancelMixVideoAutoPlay;
@property (nonatomic) BOOL disableImmersionMode;
@property (nonatomic) BOOL isSwitchLongVideoFail;
@property (nonatomic) NSTimer immersionModeTimer;
@property (nonatomic) q tokenErrorRetryTimes;
@property (nonatomic) <AFDPinchZoomTransitionHelperProtocol> pinchZoomTransitionHelper;
@property (nonatomic) q stallState;
@property (nonatomic) NSTimer showVideoHallGuideTimer;
@property (nonatomic) BOOL shouldShowPlayNextVideoTips;
@property (nonatomic) AWEAwemeModel currentModel;
@property (nonatomic) BOOL isPlayingInputDanmaku;
@property (nonatomic) q longVideoPlaybackAction;
@property (nonatomic) double stallBeginTime;
@property (nonatomic) double skipEndingTime;
@property (nonatomic) @? skipOpeningEndingGuideBlock;
@property (nonatomic) @? skipOpeningEndingTipsBlock;
@property (nonatomic) BOOL disableSkipHeadOnce;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) BOOL autoResumeFromHistory;
@property (nonatomic) BOOL defaultImmersedMode;
@property (nonatomic) NSNumber defaultStartPlayTime;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWERVDetailPageContext pageContext;
@property (nonatomic) <AWERelatedVideoVideoPlayerViewControllerDelegate> delegate;
@property (nonatomic) double originY;
@property (nonatomic) BOOL disableDoubleTap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLogExtraDict:;
- (void)setEnterFrom:;
- (void)player:playbackFailedWithError:;
- (void)playerDidReadyForDisplay:;
- (void)player:didChangeStallState:;
- (void)player:playbackFailedForURL:error:;
- (id)logExtraDict;
- (id)enterFrom;
- (void)player:updatePlayTime:canPlayTime:totalTime:;
- (void)playerWillStartNextLoop:;
- (void)playerWillStartNextLoopFinished:;
- (void)player:didChangePlaybackToAction:;
- (unsigned long long)pinchTransition_destinatedType;
- (BOOL)transition_shouldStartPinchInteractiveTranstionForZoomType:gestureRecognizer:;
- (id)transition_destinatedViewControllerForZoomType:gestureRecognizer:;
- (BOOL)transition_shouldStartPinchInteractiveTranstionToVC:;
- (void)inner_pinchTransitionDidFinish;
- (void)transition_didEndPinchTransitionWithContext:;
- (void)setupContextHandler;
- (void)removeFromParentVC;
- (id)pureModeExitTransitionDelegate;
- (BOOL)pinch_enableLongPressPanel;
- (id)pinch_changeSpeedModeEventParamsWithModel:;
- (void)pinch_updateOutContainerWithPureModeVC:;
- (void)pinch_startExitAnimationWithPinchTargetView:updateAnimator:;
- (void)inner_pinchTransitionWillBegin;
- (void)inner_pinchTransitionDidCancel;
- (void)outer_pinchTransitionWillBegin;
- (void)outer_pinchTransitionDidFinish;
- (void)outer_pinchTransitionDidCancel;
- (id)pinchTransitionDelegate;
- (id)relatedViewControllerForPrefetch;
- (void)videoController:playerPlayTime:canPlayTime:totalTime:;
- (id)pinch_getTargetViewForContainerView:;
- (void)pinch_startAnimationWithPinchTargetView:updateAnimator:;
- (void)pinch_updateToContainerWithPureModeVC:;
- (id)pinch_getBackgroundViewForContainerView:;
- (void)pinch_recoverFromContainerWithPureModeVC:;
- (void)setFeedMode:;
- (void)setDoubleTap:;
- (void)configSubviews;
- (double)totalVideoDuration;
- (void)updatePlayerViewFrame;
- (void)setEngineModel:;
- (void)setupBind;
- (long long)stallState;
- (void)preparePinchZoomTransition;
- (id)pinchZoomTransitionHelper;
- (void)resetPinchZoomTransition;
- (void)setPinchZoomTransitionHelper:;
- (id)engineModel;
- (void)setStallState:;
- (void)resetToBeginTime;
- (void)playResumeDisplayLink;
- (void)resetDisplayLink;
- (void)setIsSliding:;
- (BOOL)isSliding;
- (BOOL)useCommonThumbnailLogic;
- (id)engineBigImage;
- (BOOL)requestBigThumb;
- (void)setRequestBigThumb:;
- (void)setEngineBigImage:;
- (void)getVideoPreviewImageIndex:completion:;
- (id)framePreviewImageForProgress:totalDuration:originalImage:;
- (BOOL)isPlayerUnplayedStatus;
- (void)switchLoadingModel:;
- (void)configBackgroundPlay;
- (long long)userActionPlayState;
- (long long)videoActionState;
- (void)updateScreenCastProgress;
- (void)refreshLogExtraDict;
- (double)videoStartInterval;
- (void)setVideoStartInterval:;
- (void)setDisableDoubleTap:;
- (void)updateScreenCastPlayStatus;
- (id)defaultStartPlayTime;
- (void)setDefaultStartPlayTime:;
- (id)seekDurationList;
- (void)setSeekDurationList:;
- (BOOL)disableDoubleTap;
- (void)shouldDisableUserControl:;
- (void)updateLogExtraDictWithDictionary:;
- (void)skipVideoHead;
- (void)updateSkipEndingTime;
- (double)skipEndingTime;
- (void)showSkipVideoTailReminder;
- (void)setSkipEndingTime:;
- (void)skipVideoTailWithTotalTime:;
- (unsigned long long)currentResolutionType:;
- (void)guideOpenSkipVideoHeadTail;
- (id)paramsForTrackLongVideo;
- (void)updatePlayerResolutionBeforeStartPlay;
- (void)autoSkipVideoHead;
- (void)setSkipOpeningEndingGuideBlock:;
- (id)skipOpeningEndingGuideBlock;
- (BOOL)isReminderShowing;
- (void)setSkipOpeningEndingTipsBlock:;
- (id)skipOpeningEndingTipsBlock;
- (void)trackSkipReminderClick;
- (void)trackSkipReminderShow;
- (void)seekVideoStartToDefault;
- (void)removeVideoViewController;
- (void)clearDefaultStartPlayTime;
- (void)setStallBeginTime:;
- (double)stallBeginTime;
- (void)changePlaySpeed:;
- (void)enterImmersionMode;
- (void)exitImmersionMode;
- (void)configAfterQuitLandscape:;
- (id)optimizeControlView;
- (void)resetImmersionModeTimer;
- (void)submitWatchHistory;
- (void)clipPlayControllerView;
- (double)playerVerticalFrameOffset:;
- (void)switchPlayFailedMode:;
- (BOOL)isShowingFullPlayerReminderView;
- (BOOL)controlViewPlayerIsReady;
- (void)refreshPlayTime:canPlayTime:totalTime:forceUpdate:animated:;
- (void)switchToFeedModel:;
- (void)showPureModeFullPage;
- (BOOL)userCancelMixVideoAutoPlay;
- (void)setUserCancelMixVideoAutoPlay:;
- (void)controlViewPlayButtonClicked:;
- (void)setHasShownReminderView:;
- (BOOL)hasShownReminderView;
- (void)trackClickReminderView:clickReplay:;
- (void)trackShowReminderView;
- (void)controlViewRetryButtonClicked;
- (void)controlViewSliderTouchBegan:;
- (void)controlViewSliderTouchBeganWithDuration:;
- (void)controlViewSliderValueChangedWithDuration:;
- (void)controlViewSliderTouchEndedWithDuration:bySlideScreen:;
- (void)controlViewSliderTouchEnded:bySlideScreen:;
- (void)controlViewSliderValueChanged:progress:;
- (void)pinch_startAnimationWithPinchTargetView:updateAnimator:targetFrame:;
- (void)handlePlaystateChangedWithIsPlaying:;
- (id)immersionModeTimer;
- (void)setImmersionModeTimer:;
- (id)showVideoHallGuideTimer;
- (void)setShowVideoHallGuideTimer:;
- (void)setIsSwitchLongVideoFail:;
- (void)ioniaPlayerControlFullScreenClicked;
- (void)controlViewChangeSpeed;
- (void)setDisableSkipHeadOnce:;
- (void)forceEnterImmersionMode;
- (void)forceExitImmersionMode;
- (void)trackChangeSpeedMode:speedMethod:;
- (double)widthForPlayerFakeHorizontal:;
- (void)updateFakeLandscapeVideoScalingMode;
- (BOOL)disableImmersionMode;
- (void)startImmersionModeTimer;
- (void)stopImmersionModeTimer;
- (void)setDisableImmersionMode:;
- (void)mediumHotVideoVideoContinuePlay;
- (BOOL)isDanmakuPanelShow;
- (void)loopPlay;
- (void)setShouldShowPlayNextVideoTips:;
- (void)switchControlViewPlayStatus;
- (void)setTokenErrorRetryTimes:;
- (void)setTrackVideoPlayEndParams:;
- (void)setTapProgressTraceLock:;
- (BOOL)isFeedModel;
- (void)traceVideoPlayPause;
- (void)longVideoContinuePlay;
- (void)mediumVideoContinuePlay;
- (BOOL)disableSkipHeadOnce;
- (id)getLongVideoContinuePlayTitle;
- (void)handlePlayerForOptimizeView:didChangePlaybackToAction:;
- (long long)longVideoPlaybackAction;
- (void)setLongVideoPlaybackAction:;
- (BOOL)shouldShowPlayNextVideoTips;
- (BOOL)playOver;
- (void)traceVideoPlayFinished;
- (void)playerWillStartNextLoopAsync:;
- (long long)tokenErrorRetryTimes;
- (void)showPreviewByCommonLogicByProcess:;
- (void)refreshPreviewImageForNewControlView;
- (void)traceProgressSlideActionType:;
- (BOOL)isSwitchLongVideoFail;
- (void)traceSpeedModePlayTimeWithLongPress;
- (double)nextPlaySpeed;
- (void)refreshPreviewImageWithBigImage:process:;
- (void)updatePinchedStatus:;
- (id)destinatedViewControllerForZoomType:;
- (id)controlViewSupportResolutions;
- (void)controlViewSelectedResolution:;
- (void)controlViewHiddenResolutionSelectPop;
- (void)configAfterQuitAwemeDetailVC:isSameVideo:;
- (void)switchToUnplayStatus;
- (void)pausePlayerTimer;
- (void)resumePlayerTimer;
- (void)handlePlayer:didChangePlaybackToAction:;
- (void)setOptimizeControlView:;
- (BOOL)autoResumeFromHistory;
- (void)setAutoResumeFromHistory:;
- (BOOL)defaultImmersedMode;
- (void)setDefaultImmersedMode:;
- (BOOL)tapProgressTraceLock;
- (id)trackVideoPlayEndParams;
- (BOOL)isPlayingInputDanmaku;
- (void)setIsPlayingInputDanmaku:;
- (void)setModel:;
- (void)dealloc;
- (BOOL)play;
- (id)delegate;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (BOOL)gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (id)displayLink;
- (void)prepareForDisplay;
- (id)initWithContext:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)handleDoubleTap:;
- (void)replay;
- (id)model;
- (void)setDisplayLink:;
- (id)initWithNibName:bundle:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (void)viewDidAppear:;
- (void)reset;
- (void)stopDisplayLink;
- (void)setDelegate:;
- (BOOL)stop;
- (id)playerViewController;
- (BOOL)pause;
- (id)currentModel;
- (void)handleTap:;
- (void)setPlayerViewController:;
- (id)tap;
- (void)setTap:;
- (void)setPageContext:;
- (id)pageContext;
- (void)setCurrentModel:;
- (void)updateWithModel:;
- (void)setupNotifications;
- (double)originY;
- (void)setOriginY:;
- (double)currentTimeInterval;
- (BOOL)isQuiet;
- (void)setIsQuiet:;
- (BOOL)pauseIfNeeded;
- (void)seekToTime:completion:;
- (id)doubleTap;
@end
