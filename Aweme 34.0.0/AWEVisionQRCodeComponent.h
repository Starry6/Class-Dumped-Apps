@interface AWEVisionQRCodeComponent : AWEVisionFeatureComponent
@property (nonatomic) Q scanResultJump;
@property (nonatomic) BOOL appeared;
@property (nonatomic) ACCCameraScanQRCodePerformanceTimestamp scanQRCodePerformanceTimestamp;
@property (nonatomic) UIButton bubbleView;
@property (nonatomic) ACCScanQRCodeMaskView bgMaskView;
@property (nonatomic) ACCScanMultiCodeMiddleViewController multiCodeVC;
@property (nonatomic) BOOL stableChanged;
@property (nonatomic) BOOL backFromMiddlePage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidLoad;
- (void)turnMultiEnigma:param:;
- (id)bgMaskView;
- (void)setBgMaskView:;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentWillAppear;
- (void)componentDidDisappear;
- (void)flowServiceStableChanged:;
- (void)onReceivedCameraScanQRCodeResults:;
- (void)onReceivedCameraScanQRCodeResult:;
- (id)shakingDetectParam;
- (id)scanCameraQRCodeParam;
- (void)alertImageNoQRCode;
- (void)resetAllRecordStatus;
- (id)scanQRCodePerformanceTimestamp;
- (BOOL)stableChanged;
- (void)setStableChanged:;
- (id)qrcodeBottomHint;
- (id)shakeBottomHint;
- (unsigned long long)scanResultJump;
- (void)setScanResultJump:;
- (id)getResultWithJumpUrl:resultList:;
- (void)loadBubbleViewLoadingAnimation;
- (void)setScanQRCodePerformanceTimestamp:;
- (void)openScanAlgorithm;
- (void)closeScanAlgorithm;
- (void)enableScanMode:;
- (void)qrcodeDetectEnable:;
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
- (void)dealloc;
- (void)addObserver;
- (void).cxx_destruct;
- (BOOL)appeared;
- (void)setAppeared:;
- (id)bubbleView;
- (void)setBubbleView:;
+ (BOOL)enableFixVisionCameraMultiCodeDismissFailed;
@end
