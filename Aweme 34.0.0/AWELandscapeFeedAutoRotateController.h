@interface AWELandscapeFeedAutoRotateController : AWELandscapeFeedBaseController
@property (nonatomic) BOOL isMonitoring;
@property (nonatomic) NSTimer accidentalTouchTimer;
- (void)beginMonitor;
- (void)endMonitor;
- (void)autoRotateSwitchChanged;
- (void)resetAccidentalTouchTimer:;
- (id)currentLiveCellChildViewController;
- (BOOL)canAutoRotate;
- (id)accidentalTouchTimer;
- (void)setAccidentalTouchTimer:;
- (void)trackRotateExitFailedWithReason:;
- (void)trackChangingAutoRotateSwitch;
- (void)viewWillDisappear:;
- (void)dealloc;
- (void)viewDidLoad;
- (void)orientationChanged:;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (BOOL)isMonitoring;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)setIsMonitoring:;
- (void)setupOrientation;
@end
