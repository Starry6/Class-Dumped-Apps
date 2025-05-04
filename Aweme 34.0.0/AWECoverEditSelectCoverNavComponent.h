@interface AWECoverEditSelectCoverNavComponent : ACCSecondaryPageComponent
@property (nonatomic) UIView navBar;
@property (nonatomic) UIButton backButton;
@property (nonatomic) UILabel titleLabel;
- (void)componentDidMount;
- (void)backButtonDidClick;
- (unsigned long long)secondaryPageComponentType;
- (double)subViewHeight;
- (id)subViewInHierarchy;
- (id)backButton;
- (void)setBackButton:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)navBar;
- (void)setNavBar:;
@end
