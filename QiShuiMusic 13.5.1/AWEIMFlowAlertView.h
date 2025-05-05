@interface AWEIMFlowAlertView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton actionButton;
@property (nonatomic) UIView animationView;
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) @? actionBlock;
- (id)initWithActionBlock:title:desc:;
- (void)actionButtonClicked;
- (void)showAlertWithAnimation;
- (void)dismiss;
- (BOOL)isAnimating;
- (void)setTitleLabel:;
- (id)actionBlock;
- (void).cxx_destruct;
- (void)setIsAnimating:;
- (id)titleLabel;
- (id)arrowView;
- (void)setArrowView:;
- (void)setupUI;
- (id)actionButton;
- (void)setActionButton:;
- (void)setActionBlock:;
- (id)animationView;
- (void)setAnimationView:;
@end
