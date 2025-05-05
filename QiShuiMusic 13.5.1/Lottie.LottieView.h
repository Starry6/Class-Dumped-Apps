@interface Lottie.LottieView : UIView
@property (nonatomic) q contentMode;
- (void)animationWillEnterForeground;
- (void)animationWillMoveToBackground;
- (long long)contentMode;
- (void)layoutSubviews;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void)didMoveToWindow;
- (void)setContentMode:;
@end
