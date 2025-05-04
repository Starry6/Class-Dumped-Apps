@interface AWEUserLoginNavigationBar : UIView
@property (nonatomic) UIButton leftButton;
@property (nonatomic) UIButton rightButton;
@property (nonatomic) AWEUserLoginNavigationBarContext context;
@property (nonatomic) AWEUserLoginNavigationBarUIConfig uiConfig;
@property (nonatomic) <AWEUserLoginNavigationBarDelegate> delegate;
- (id)uiConfig;
- (void)updateUIConfig:;
- (void)skipAction;
- (void)rightButtonAction:;
- (void)helpAction;
- (void)setupLeftButton;
- (void)setupRightButton;
- (void)leftButtonAction:;
- (void)updateIsAmbientHeadViewShown:;
- (void)setLeftButton:;
- (void)setRightButton:;
- (id)delegate;
- (id)leftButton;
- (id)initWithContext:;
- (id)rightButton;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)closeAction;
- (id)context;
- (void)backAction;
- (void)setupUI;
- (void)layoutUI;
@end
