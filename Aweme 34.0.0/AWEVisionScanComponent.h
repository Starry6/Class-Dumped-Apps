@interface AWEVisionScanComponent : AWEVisionFeatureComponent
@property (nonatomic) ACCScanScanMaskView bgMaskView;
@property (nonatomic) ACCScanStatusTipView tipView;
@property (nonatomic) ACCScanObjectTagView tagView;
@property (nonatomic) UIButton bubbleView;
@property (nonatomic) ACCScanNoResultTipsView noResultTipsView;
@property (nonatomic) ACCScanMultiCodeMiddleViewController multiCodeVC;
@property (nonatomic) BEFView befView;
@property (nonatomic) NSString befRenderResourcePath;
@property (nonatomic) <ACCScanImageGuideHandlerProtocol> imageGuideHandler;
@property (nonatomic) BOOL befEffectReady;
@property (nonatomic) BOOL stableChanged;
@property (nonatomic) Q scanResultJump;
@property (nonatomic) BOOL supportScanAnything;
@property (nonatomic) BOOL autoOpenSearchPage;
@property (nonatomic) BOOL appeared;
@property (nonatomic) BOOL handledScanJumpProcess;
@property (nonatomic) BOOL recordHandlerCloseTorch;
@property (nonatomic) BOOL flashLightChanged;
@property (nonatomic) BOOL hasShownAlbumImageGuide;
@property (nonatomic) BOOL veAutoSetZoomOperation;
@property (nonatomic) VEAlgorithmSessionResultScanScript currentScanScript;
@property (nonatomic) double befBeginLoadInterval;
@property (nonatomic) NSMutableDictionary scanTrackIdPerformanceTimestampDict;
@property (nonatomic) ACCCameraScanQRCodePerformanceTimestamp scanQRCodePerformanceTimestamp;
@property (nonatomic) Q tagShowStartTime;
@property (nonatomic) BOOL firstDotShowHasTrack;
@property (nonatomic) BOOL firstTagShowHasTrack;
@property (nonatomic) double componentAppearTime;
@property (nonatomic) BOOL isProcessingAlbumImageGuide;
@property (nonatomic) float currentScanTrackId;
@property (nonatomic) BOOL backFromMiddlePage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidLoad;
- (BOOL)msgProc:arg1:arg2:arg3:;
- (id)bgMaskView;
- (void)setBgMaskView:;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentWillAppear;
- (void)componentDidDisappear;
- (id)befView;
- (void)setBefView:;
- (void)flowServiceDidEnterScanMode;
- (void)flowServiceStableChanged:;
- (void)onReceivedCameraScanAnythingResult:;
- (void)onReceivedCameraScanQRCodeResults:;
- (void)onReceivedCameraScanQRCodeResult:;
- (void)onReceivedDetectTimeOutQrcodeZoomFactor:;
- (void)onReceivedQrcodeUpdateZoomFactor:;
- (id)shakingDetectParam;
- (id)scanCameraQRCodeParam;
- (id)scanAnythingParam;
- (void)resetAllRecordStatus;
- (id)scanQRCodePerformanceTimestamp;
- (BOOL)stableChanged;
- (void)setStableChanged:;
- (id)shakeBottomHint;
- (unsigned long long)scanResultJump;
- (void)setScanResultJump:;
- (id)getResultWithJumpUrl:resultList:;
- (void)loadBubbleViewLoadingAnimation;
- (BOOL)flashLightChanged;
- (void)setFlashLightChanged:;
- (BOOL)recordHandlerCloseTorch;
- (void)setRecordHandlerCloseTorch:;
- (void)setScanQRCodePerformanceTimestamp:;
- (void)removeBefView;
- (void)setComponentAppearTime:;
- (void)setHasShownAlbumImageGuide:;
- (void)displayScanGuideIfNeeded;
- (void)openScanAlgorithm;
- (void)showResultTipIfNeed;
- (void)updateBefViewActive:;
- (void)closeScanAlgorithm;
- (void)removeNoResultTipsViewTips;
- (void)hideAlbumImageGuideIfNeeded;
- (id)befRenderResourcePath;
- (void)loadBEFView:;
- (void)downloadEffectModel:;
- (BOOL)isProcessingAlbumImageGuide;
- (void)setIsProcessingAlbumImageGuide:;
- (void)displayAlbumImageGuideWithCompletion:;
- (id)imageGuideHandler;
- (id)noResultTipsView;
- (BOOL)hasShownAlbumImageGuide;
- (double)componentAppearTime;
- (void)setImageGuideHandler:;
- (BOOL)veAutoSetZoomOperation;
- (BOOL)scanARPatternWithRecogitionResult:;
- (void)sendMessage:item:;
- (float)currentScanTrackId;
- (id)getTagImage:;
- (void)setCurrentScanScript:;
- (void)setCurrentScanTrackId:;
- (void)trackARShow;
- (void)delayShowNoResultTip;
- (void)setVeAutoSetZoomOperation:;
- (BOOL)befEffectReady;
- (BOOL)supportScanAnything;
- (void)handleOpenScanResultPage:;
- (void)setBefEffectReady:;
- (BOOL)autoOpenSearchPage;
- (id)defaultBottomHint;
- (id)getPerformanceTimestampWithTrackId:;
- (void)initPerformanceTimestampWithTrackId:;
- (BOOL)firstDotShowHasTrack;
- (void)setFirstDotShowHasTrack:;
- (unsigned long long)tagShowStartTime;
- (void)setTagShowStartTime:;
- (BOOL)firstTagShowHasTrack;
- (void)setFirstTagShowHasTrack:;
- (BOOL)handledScanJumpProcess;
- (void)setHandledScanJumpProcess:;
- (void)removeAllTrackIdPerformanceTimestamp;
- (void)setAutoOpenSearchPage:;
- (void)setSupportScanAnything:;
- (void)setNoResultTipsView:;
- (void)downloadEffect:render:;
- (void)setBefRenderResourcePath:;
- (id)noResultBottomHint;
- (id)scanTrackIdPerformanceTimestampDict;
- (void)clickTagView;
- (id)currentScanScript;
- (void)setScanTrackIdPerformanceTimestampDict:;
- (void)enableScanMode:;
- (void)qrcodeDetectEnable:;
- (void)scanDetectEnable:;
- (void)switchModeViewWillChangeToMode:oldMode:;
- (void)setMultiCodeVC:;
- (id)multiCodeVC;
- (void)jumpQRCode:result:;
- (void)trackScanCameraQRCodeMonitorWithMultiCode:;
- (BOOL)backFromMiddlePage;
- (BOOL)fixQRCodeMiddlePageReturnDelayEnable;
- (void)setBackFromMiddlePage:;
- (void)loadCustomUI;
- (void)destroyCustomUI;
- (void)setupFlashLightFrameImp;
- (void)scanShakingDetectEnable:;
- (void)destroyScanToScanConfig;
- (void)scanAnythingDetectEnable:;
- (void)setBefBeginLoadInterval:;
- (void)trackBEFLoadMonitorWithSuccess:error:;
- (void)trackScanReality:;
- (void)trackScanTagShowTrackWithTrackId:;
- (void)trackScanDotShowTrackWithTrackId:isGrayDot:;
- (double)befBeginLoadInterval;
- (void)becomeActive;
- (void)enterBackground;
- (void)dealloc;
- (void)setTipView:;
- (void)addObserver;
- (void).cxx_destruct;
- (void)resignActive;
- (BOOL)appeared;
- (void)setAppeared:;
- (id)bubbleView;
- (void)setBubbleView:;
- (id)tipView;
- (id)tagView;
- (void)setTagView:;
+ (BOOL)enableFixVisionCameraMultiCodeDismissFailed;
@end
