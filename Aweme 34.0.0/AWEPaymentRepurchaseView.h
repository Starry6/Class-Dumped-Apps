@interface AWEPaymentRepurchaseView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIButton repurchaseButton;
@property (nonatomic) q state;
@property (nonatomic) q buttonPosition;
@property (nonatomic) @? onClickedBlock;
- (id)onClickedBlock;
- (void)setOnClickedBlock:;
- (void)makeConstraint;
- (long long)buttonPosition;
- (id)repurchaseButton;
- (void)didClickUnlockButton:;
- (void)setRepurchaseText:;
- (void)updateRepurchaseTextFont;
- (void)setButtonPosition:;
- (void)setRepurchaseButton:;
- (id)containerView;
- (long long)state;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setState:;
- (void)setupUI;
- (id)initWithPosition:;
@end
