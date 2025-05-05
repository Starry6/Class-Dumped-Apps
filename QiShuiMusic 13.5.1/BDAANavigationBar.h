@interface BDAANavigationBar : UIView
@property (nonatomic) UIButton backButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) NSString title;
@property (nonatomic) UIFont titleFont;
@property (nonatomic) UIColor titleColor;
@property (nonatomic) @? clickBackAction;
- (id)clickBackAction;
- (void)setClickBackAction:;
- (id)titleFont;
- (void)setTitleFont:;
- (void)setTitleLabel:;
- (id)backButton;
- (void)setTitleColor:;
- (void)setTitle:;
- (id)initWithFrame:;
- (id)titleColor;
- (id)title;
- (void).cxx_destruct;
- (void)backAction;
- (id)titleLabel;
- (void)setBackButton:;
- (void)hideBackButton;
- (void)setupUI;
+ (double)navHeight;
@end
