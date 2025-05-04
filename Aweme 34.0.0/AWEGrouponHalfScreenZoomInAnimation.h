@interface AWEGrouponHalfScreenZoomInAnimation : AWEGrouponHalfScreenAnimation
@property (nonatomic) UIView contentView;
@property (nonatomic) UIView hiddenViewBeforeAnimation;
@property (nonatomic) UIView targetView;
@property (nonatomic) UIView containerView;
- (BOOL)isValidAnimation;
- (long long)animationValue;
- (void)setHiddenViewBeforeAnimation:;
- (id)hiddenViewBeforeAnimation;
- (id)animationType;
- (id)targetView;
- (id)contentView;
- (id)containerView;
- (void)setTargetView:;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setContentView:;
@end
