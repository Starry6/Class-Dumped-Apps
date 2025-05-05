@interface UIStatusBarHideAnimationParameters : UIStatusBarAnimationParameters
@property (nonatomic) NSInteger hideAnimation;
@property (nonatomic) double additionalSlideHeight;
- (BOOL)shouldAnimate;
- (id)initWithDefaultParameters;
- (double)additionalSlideHeight;
- (void)setAdditionalSlideHeight:;
- (void)setHideAnimation:;
- (int)hideAnimation;
@end
