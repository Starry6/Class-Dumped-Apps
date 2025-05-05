@interface UIStatusBarStyleAnimationParameters : UIStatusBarAnimationParameters
@property (nonatomic) NSInteger styleAnimation;
- (BOOL)shouldAnimate;
- (id)initWithDefaultParameters;
- (void)setStyleAnimation:;
- (int)styleAnimation;
@end
