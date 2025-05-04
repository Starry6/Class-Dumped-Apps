@interface AWEIMExchangeCameraTitleComponent : AFDMomentCameraBaseComponent
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton titleButton;
@property (nonatomic) <AFDMomentCameraFlowService> flowService;
@property (nonatomic) AWEIMExchangeCameraTitleViewModel viewModel;
@property (nonatomic) AWEIMExchangeAlbumRandomViewModel randomViewModel;
- (void)componentDidLoad;
- (void)bindObserver;
- (id)flowService;
- (void)setFlowService:;
- (void)p_setTitle;
- (id)p_getAttributedTextWithText:;
- (id)randomViewModel;
- (void)setRandomViewModel:;
- (id)viewModel;
- (void)setTitleLabel:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)titleButton;
- (void)setTitleButton:;
@end
