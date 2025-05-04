@interface AWEOpenPlatformHalfAuthManageDescViewController : UIViewController
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIButton backButton;
@property (nonatomic) @? animationBlock;
- (void)p_setupUI;
- (void)backButtonTap;
- (id)backButton;
- (id)animationBlock;
- (void)setAnimationBlock:;
- (void)viewDidLoad;
- (void)setBackButton:;
- (id)containerView;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)contentLabel;
- (void)setContentLabel:;
@end
