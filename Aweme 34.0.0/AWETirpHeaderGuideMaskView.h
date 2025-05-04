@interface AWETirpHeaderGuideMaskView : UIView
@property (nonatomic) CAGradientLayer gradientsLayer;
@property (nonatomic) LOTAnimationView animationView;
@property (nonatomic) UILabel titleLabel;
- (void)onClickAction;
- (id)gradientsLayer;
- (void)hideGuideMask;
- (void)setGradientsLayer:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setupUI;
- (id)animationView;
- (void)setAnimationView:;
+ (BOOL)needShowGuideMask;
@end
