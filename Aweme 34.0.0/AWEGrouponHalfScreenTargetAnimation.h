@interface AWEGrouponHalfScreenTargetAnimation : AWEGrouponHalfScreenAnimation
@property (nonatomic) UIView targetView;
@property (nonatomic) UIView containerView;
@property (nonatomic) double scale;
- (BOOL)isValidAnimation;
- (long long)animationValue;
- (id)animationType;
- (id)init;
- (double)scale;
- (id)targetView;
- (id)containerView;
- (void)setTargetView:;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setScale:;
@end
