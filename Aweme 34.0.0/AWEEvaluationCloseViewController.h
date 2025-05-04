@interface AWEEvaluationCloseViewController : UIViewController
@property (nonatomic) UIButton backButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel tipLabel;
- (void)backButtonClick:;
- (id)backButton;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewDidLoad;
- (void)setBackButton:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)imageView;
- (void)setTipLabel:;
- (id)tipLabel;
- (void)setupUI;
@end
