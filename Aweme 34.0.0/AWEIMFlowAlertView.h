@interface AWEIMFlowAlertView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton actionButton;
@property (nonatomic) UIView animationView;
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) @? actionBlock;
- (void)actionButtonClicked;
- (id)initWithActionBlock:title:desc:;
- (void)showAlertWithAnimation;
- (void)dismiss;
- (BOOL)isAnimating;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setIsAnimating:;
- (id)titleLabel;
- (id)arrowView;
- (void)setArrowView:;
- (void)setupUI;
- (void)setActionBlock:;
- (id)actionBlock;
- (id)actionButton;
- (void)setActionButton:;
- (id)animationView;
- (void)setAnimationView:;
@end
