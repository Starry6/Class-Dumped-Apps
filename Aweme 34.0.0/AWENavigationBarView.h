@interface AWENavigationBarView : UIView
@property (nonatomic) UIVisualEffectView blurView;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIButton backBtn;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) BOOL useBlurBackground;
@property (nonatomic) UIButton rightButton;
- (id)backBtn;
- (void)setBackBtn:;
- (BOOL)useBlurBackground;
- (void)setUseBlurBackground:;
- (void)setRightButton:;
- (id)blurView;
- (void)setBlurView:;
- (id)initWithFrame:;
- (id)containerView;
- (id)rightButton;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setupUI;
@end
