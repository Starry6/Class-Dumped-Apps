@interface AWEProfileEditMainNavView : UIView
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UIButton backButton;
@property (nonatomic) UIView backBackgroundView;
@property (nonatomic) UIButton changeBackgroundButton;
@property (nonatomic) @? backButtonBlock;
@property (nonatomic) @? changeBackgroundButtonBlock;
- (void)configWithViewModel:;
- (id)backButtonBlock;
- (void)setBackButtonBlock:;
- (void)p_setupSubviews;
- (void)observerScrollWith:;
- (id)changeBackgroundButton;
- (id)backBackgroundView;
- (id)changeBackgroundButtonBlock;
- (void)changeBackgroundButtonTapped:;
- (void)setChangeBackgroundButtonBlock:;
- (void)setBackBackgroundView:;
- (void)setChangeBackgroundButton:;
- (id)backButton;
- (id)accessibilityElements;
- (void)setBackgroundView:;
- (void)setBackButton:;
- (id)initWithFrame:;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)backButtonTapped:;
@end
