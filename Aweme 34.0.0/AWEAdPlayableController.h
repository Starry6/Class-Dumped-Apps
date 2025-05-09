@interface AWEAdPlayableController : NSObject
@property (nonatomic) UIViewController<AWEFeedPlayableContainerProtocol> viewController;
@property (nonatomic) UIView<AWEFeedPlayableConversionView> conversionView;
@property (nonatomic) UIView<AWEFeedPlayableMaskView> maskView;
@property (nonatomic) UIViewController<AWEFeedPlayableLynxViewController> lynxMaskViewController;
@property (nonatomic) UIView<AWEFeedPlayableLoadingMaskView> loadingMaskView;
@property (nonatomic) AWEBinding mainSceneReadyBinding;
@property (nonatomic) UILongPressGestureRecognizer longGesture;
@property (nonatomic) UIView topMaskView;
@property (nonatomic) CAGradientLayer topMaskLayer;
@property (nonatomic) UIView bottomMaskView;
@property (nonatomic) CAGradientLayer bottomMaskLayer;
@property (nonatomic) UIView<AWEFeedPlayableScrollTipView> scrollTipView;
@property (nonatomic) NSObject<AWECommerceAudioPlayer> audioPlayer;
@property (nonatomic) UIView alphaPlayerView;
@property (nonatomic) CMCFeedPlayableContenxt playableContext;
@property (nonatomic) double playableGapStarTime;
@property (nonatomic) Q showType;
@property (nonatomic) double maskShowTimeInterval;
@property (nonatomic) BOOL playFromFirstFrame;
@property (nonatomic) BOOL hasReset;
@property (nonatomic) double playableInnerVideoSelectedTimestamp;
@property (nonatomic) double playableInnerVideoUnSelectedTimestamp;
@property (nonatomic) NSObject<OS_dispatch_source> playableEffectiveTimer;
@property (nonatomic) double effectiveDuration;
@property (nonatomic) double effectivePlayTime;
@property (nonatomic) BOOL shouldSkipLoadingVideo;
@property (nonatomic) double loadingVideoTotalPlayDuration;
@property (nonatomic) BOOL isCurrentVCShow;
@property (nonatomic) BOOL isSharePanelShow;
@property (nonatomic) NSString playableEventID;
@property (nonatomic) UIView previewWatermarkView;
@property (nonatomic) AWEAwemeBaseViewController cellViewController;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWEPlayableWebViewPreloadManager preloadManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showSharePanel;
- (id)preloadManager;
- (void)setPreloadManager:;
- (void)playableOpenSystemSettings:type:;
- (id)playableStayDuration;
- (void)appDidEnterBackgroundNotification:;
- (void)appWillEnterForegroundNotification:;
- (double)effectivePlayTime;
- (void)setEffectivePlayTime:;
- (void)setBottomMaskView:;
- (id)bottomMaskView;
- (id)topMaskView;
- (void)setTopMaskView:;
- (void)handleBroadcastNotification:;
- (void)setEffectiveDuration:;
- (void)setLongGesture:;
- (id)longGesture;
- (BOOL)hasReset;
- (void)setHasReset:;
- (void)setCellViewController:;
- (void)addLongPressPanelObserver;
- (void)addShareResultHandler;
- (void)setPlayFromFirstFrame:;
- (void)setupPlayableTimer;
- (void)appendOpenURLForLightTask;
- (void)handleVideoShareNotification:;
- (void)showWatermarkIfNeeded;
- (void)fetchWebview;
- (BOOL)hasPlayableContainerShow;
- (void)resetAllViewComponents;
- (id)loadingMaskView;
- (void)insertPlayablePage;
- (void)firstPlayPlayable;
- (void)continuePlayPlayable;
- (void)setIsCurrentVCShow:;
- (id)cellViewController;
- (BOOL)playFromFirstFrame;
- (void)trackPlay;
- (BOOL)shouldSkipLoadingVideo;
- (void)handleShowPlayable;
- (void)setPlayableInnerVideoSelectedTimestamp:;
- (long long)singleLeaveDuration;
- (void)trackPlableEvent:extraParams:;
- (id)playableContext;
- (void)trackBreak;
- (void)trackMaskView:adExtraData:;
- (void)trackFeedPlayableView:adExtraData:;
- (void)setPlayableInnerVideoUnSelectedTimestamp:;
- (long long)singleVideoDuration;
- (id)topMaskLayer;
- (id)bottomMaskLayer;
- (id)previewWatermarkView;
- (void)setPreviewWatermarkView:;
- (void)triggerAdActionAfter:block:;
- (void)pauseLoadingVideo;
- (id)mainSceneReadyBinding;
- (void)setMainSceneReadyBinding:;
- (void)addPlayablePage;
- (void)addAlphaPlayerView;
- (void)setLoadingVideoTotalPlayDuration:;
- (void)addBottomMaskView;
- (id)scrollTipView;
- (void)setAlphaPlayerView:;
- (id)alphaPlayerView;
- (void)showLynxMaskView;
- (void)showMaskView;
- (void)setMaskShowTimeInterval:;
- (id)lynxMaskViewController;
- (void)removeAllViewComponents;
- (id)playableEventID;
- (BOOL)canHandleGestureInCell:;
- (void)resetLynxMaskViewController;
- (void)saveMaskShowStatus:;
- (void)setLoadingMaskView:;
- (void)setIsSharePanelShow:;
- (void)trackUgc:event:refer:adExtraData:;
- (BOOL)isSharePanelShow;
- (void)showPlayablePage;
- (void)showScrollTipView;
- (void)configMaskViewWithType:;
- (void)showFinalMaskView;
- (void)trackOver;
- (void)postVideoNotificationForAutoPlay;
- (void)showConversionView;
- (void)setPlayableGapStarTime:;
- (BOOL)isCurrentVCShow;
- (id)playableEffectiveTimer;
- (id)publicParams;
- (id)playableInnerVideoParams;
- (id)playableUrl;
- (double)loadingVideoTotalPlayDuration;
- (double)playableGapStarTime;
- (double)playableInnerVideoUnSelectedTimestamp;
- (double)playableInnerVideoSelectedTimestamp;
- (void)trackLongPressPanelWith:;
- (id)playableGap;
- (id)playablePlayDuration;
- (id)conversionPublicParam;
- (double)maskShowTimeInterval;
- (long long)backgroundShowReson;
- (long long)backgroundShowType;
- (id)backgroundStayDuration;
- (id)maskPublicParam;
- (void)handleLongGesture:;
- (void)replayFromPlayable;
- (void)replayFromLoading;
- (id)lynxMaskURL;
- (void)appWillResignActiveNotification:;
- (void)willSwipeToLeftOrRight:;
- (void)willChangeToOtherTab:;
- (void)handleAppStoreDismissNotification:;
- (void)trackUgcSendEventWith:;
- (id)initWithCellViewController:;
- (void)beforeRealReset;
- (void)playableStuck:params:viewController:;
- (void)playablePlayFinish:viewController:;
- (void)playableTransformModuleShow:viewController:;
- (void)playableTransformModuleChangeColor:viewController:;
- (void)playableTransformModuleHighlight:viewController:;
- (void)playableAlphaPlayerPlay:param:viewController:;
- (void)playableClickHotArea:params:viewController:;
- (void)playableSendClickEvent:params:viewController:;
- (id)playableOpenAdLandPageLinks:params:viewController:;
- (void)playableWillDealloc:;
- (void)playableRealPlayStart:viewController:;
- (void)playableShowLongPressPanel:;
- (BOOL)isContainerParentVCShowing:;
- (BOOL)playableShouldUseCustomClose:;
- (void)playableClose:animated:completion:;
- (void)playableDidFinishLoad:url:;
- (void)playableDidLoadFailed:url:error:;
- (void)setLynxMaskViewController:;
- (void)setTopMaskLayer:;
- (void)setBottomMaskLayer:;
- (void)setScrollTipView:;
- (void)setPlayableContext:;
- (void)setPlayableEffectiveTimer:;
- (void)setShouldSkipLoadingVideo:;
- (void)setPlayableEventID:;
- (void)setModel:;
- (void)cancelTimer;
- (void)dealloc;
- (void)play;
- (id)maskView;
- (void)viewWillLayoutSubviews;
- (id)view;
- (void)viewDidLoad;
- (double)effectiveDuration;
- (void)prepareForDisplay;
- (id)viewController;
- (id)model;
- (void)setAudioPlayer:;
- (void).cxx_destruct;
- (id)audioPlayer;
- (void)setMaskView:;
- (void)reset;
- (void)setViewController:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)resumeTimer;
- (void)didEndDisplaying;
- (void)setShowType:;
- (unsigned long long)showType;
- (void)willDisplay;
- (id)conversionView;
- (void)setConversionView:;
- (void)setupNotification;
@end
