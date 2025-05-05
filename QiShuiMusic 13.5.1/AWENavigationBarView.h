@interface AWENavigationBarView : UIView
@property (nonatomic) UIVisualEffectView blurView;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIButton backBtn;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) BOOL useBlurBackground;
@property (nonatomic) UIButton rightButton;
- (id)backBtn;
- (void)setBackBtn:;
- (void)setUseBlurBackground:;
- (BOOL)useBlurBackground;
- (id)blurView;
- (void)setBlurView:;
- (void)setTitleLabel:;
- (void)layoutSubviews;
- (id)containerView;
- (void)setContainerView:;
- (id)rightButton;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setRightButton:;
- (id)titleLabel;
- (void)setupUI;
@end
