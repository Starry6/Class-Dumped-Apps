@interface AWEGrouponHalfScreenZoomInFadeAnimation : AWEGrouponHalfScreenZoomInAnimation
@property (nonatomic) double initAlpha;
@property (nonatomic) double targetAlpha;
- (BOOL)isValidAnimation;
- (long long)animationValue;
- (double)initAlpha;
- (void)setInitAlpha:;
- (id)animationType;
- (id)init;
- (void)setTargetAlpha:;
- (double)targetAlpha;
@end
