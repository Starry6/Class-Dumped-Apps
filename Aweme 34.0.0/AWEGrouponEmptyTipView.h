@interface AWEGrouponEmptyTipView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton jumpButton;
@property (nonatomic) AWEGrouponPageContext pageContext;
- (id)trackParams;
- (void)registerNotification;
- (id)jumpButtonTitle;
- (void)setJumpButton:;
- (id)jumpButton;
- (id)initWithFrame:pageContext:;
- (void)needPersonalRecommendChanged:;
- (BOOL)needChangeColorToThemeLight;
- (void)recordViewShow;
- (id)initWithFrame:;
- (void)action;
- (void)setTitleLabel:;
- (void)setHidden:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)setPageContext:;
- (id)pageContext;
@end
