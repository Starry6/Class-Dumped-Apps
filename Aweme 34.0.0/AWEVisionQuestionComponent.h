@interface AWEVisionQuestionComponent : AWEVisionFeatureComponent
@property (nonatomic) ACCScanQuestionMaskView bgMaskView;
@property (nonatomic) BOOL appeared;
@property (nonatomic) BOOL hasShownTipWhenSwitchTab;
@property (nonatomic) BOOL needBanMotionDetect;
@property (nonatomic) CMMotionManager motionManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidLoad;
- (id)bgMaskView;
- (void)setBgMaskView:;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentWillAppear;
- (void)componentDidDisappear;
- (void)prepareQuestionAI;
- (void)setNeedBanMotionDetect:;
- (void)addMotionObserver;
- (void)setHasShownTipWhenSwitchTab:;
- (void)animationIndicatorWithOrientation:;
- (BOOL)enableUseMotionManager;
- (BOOL)needBanMotionDetect;
- (BOOL)hasShownTipWhenSwitchTab;
- (void)checkDeviceOrientationWithGx:Gy:;
- (void)checkDeviceHorizontalDegree:;
- (double)deviceOrientationUpdateSensitivity;
- (id)transformWithOrientation:;
- (long long)scanHorizontalAngel;
- (void)switchModeViewWillChangeToMode:oldMode:;
- (void)loadCustomUI;
- (void)destroyCustomUI;
- (void)setupFlashLightFrameImp;
- (void)dealloc;
- (double)deviceMotionUpdateInterval;
- (void).cxx_destruct;
- (BOOL)appeared;
- (void)setAppeared:;
- (id)motionManager;
- (void)setMotionManager:;
@end
