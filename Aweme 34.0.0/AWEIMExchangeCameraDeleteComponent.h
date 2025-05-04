@interface AWEIMExchangeCameraDeleteComponent : AFDMomentCameraBaseComponent
@property (nonatomic) UIButton deleteButton;
@property (nonatomic) AWEIMExchangeCameraDeleteViewModel viewModel;
@property (nonatomic) <AFDMomentCameraFlowService> flowService;
- (void)componentDidLoad;
- (void)bindObserver;
- (id)flowService;
- (void)setFlowService:;
- (void)setDeleteButton:;
- (id)viewModel;
- (void)setViewModel:;
- (id)deleteButton;
- (void).cxx_destruct;
- (void)didTapDeleteButton;
@end
