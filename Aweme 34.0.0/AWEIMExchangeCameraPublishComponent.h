@interface AWEIMExchangeCameraPublishComponent : AFDMomentCameraBaseComponent
@property (nonatomic) AWEIMExchangeCameraPublishViewModel viewModel;
@property (nonatomic) UIButton publishButton;
- (void)componentDidLoad;
- (void)bindObserver;
- (id)publishButton;
- (void)setPublishButton:;
- (id)viewModel;
- (void)startAnimation;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)stopAnimation;
@end
