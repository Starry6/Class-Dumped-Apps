@interface CJPayAccountInsuranceTipView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) BOOL isDarkThemeOnly;
@property (nonatomic) BOOL showEnable;
- (BOOL)isDarkThemeOnly;
- (void)darkThemeOnly;
- (void)p_setupUI;
- (void)setIsDarkThemeOnly:;
- (void)setShowEnable:;
- (BOOL)showEnable;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)imageView;
- (id)titleLabel;
- (void)setImageView:;
+ (id)keyboardLogo;
+ (BOOL)shouldShow;
@end
