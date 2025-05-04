@interface AWENearbyHalfScreenTargetFadeScaleAnimation : AWENearbyHalfScreenAnimation
@property (nonatomic) UIView targetView;
@property (nonatomic) UIView containerView;
@property (nonatomic) double scale;
@property (nonatomic) double targetAlpha;
@property (nonatomic) double initAlpha;
- (BOOL)isValidAnimation;
- (long long)animationValue;
- (double)initAlpha;
- (void)setInitAlpha:;
- (id)animationType;
- (id)init;
- (double)scale;
- (id)targetView;
- (id)containerView;
- (void)setTargetView:;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setScale:;
- (void)setTargetAlpha:;
- (double)targetAlpha;
@end
