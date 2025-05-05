@interface UIStatusBarOrientationAnimationParameters : UIStatusBarAnimationParameters
@property (nonatomic) NSInteger orientationAnimation;
- (BOOL)shouldAnimate;
- (id)initWithDefaultParameters;
- (int)orientationAnimation;
- (void)setOrientationAnimation:;
@end
