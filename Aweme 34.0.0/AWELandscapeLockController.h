@interface AWELandscapeLockController : AWELandscapeInteractionBaseController
@property (nonatomic) UIView lockButtonContainer;
@property (nonatomic) LOTAnimationView animationLockButton;
- (void)trackPlayTime;
- (double)centerYOffset;
- (id)lockButtonContainer;
- (id)animationLockButton;
- (void)updateLockButtonStatusWithAnimated:;
- (void)updateLayoutIfNeededWithAnimated:;
- (void)makeALightVibration;
- (void)trackLockButtonClick;
- (void)lockButtonClickAction;
- (void)setLockButtonContainer:;
- (void)setAnimationLockButton:;
- (void)updateState:;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
