@interface AWEUserLoginHalfPageNavigationBar : UIView
@property (nonatomic) UIButton actionButton;
@property (nonatomic) AWEUserLoginHalfPageNavigationBarContext context;
@property (nonatomic) <AWEUserLoginHalfPageNavigationBarDelegate> delegate;
- (void)setupBackButton;
- (void)setupCloseButton;
- (void)layoutActionButtonMobileUI;
- (id)delegate;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)closeAction;
- (id)context;
- (void)backAction;
- (void)setupUI;
- (id)actionButton;
- (void)setActionButton:;
@end
