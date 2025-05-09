@interface AWEDeliveryNavigationBar : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView bottomLine;
@property (nonatomic) UIButton leftButton;
@property (nonatomic) UIButton rightButton;
@property (nonatomic) UIButton rightSecondButton;
@property (nonatomic) NSString title;
@property (nonatomic) UIView titleView;
@property (nonatomic) @? leftAction;
@property (nonatomic) @? rightAction;
@property (nonatomic) @? rightSecondAction;
- (void)leftButtonClicked;
- (void)setLeftAction:;
- (id)rightSecondButton;
- (void)rightButtonClicked;
- (void)rightSecondButtonClicked;
- (id)leftAction;
- (id)rightSecondAction;
- (void)setRightSecondButton:;
- (void)setRightSecondAction:;
- (void)setLeftButton:;
- (id)titleView;
- (void)setRightButton:;
- (void)setTitleView:;
- (id)leftButton;
- (id)initWithFrame:;
- (id)contentView;
- (id)rightButton;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)title;
- (id)titleLabel;
- (void)setTitle:;
- (void)setupUI;
- (void)setRightAction:;
- (id)bottomLine;
- (id)rightAction;
- (void)setBottomLine:;
@end
