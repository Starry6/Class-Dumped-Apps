@interface AWELottie.ObjcLottieInternalView : LOTAnimationView
@property (nonatomic) _TtC9AWELottie18AWELottieAnimation lottieAnimation;
@property (nonatomic) double customAnimationSpeed;
@property (nonatomic) BOOL isCurrentAnimationPlaying;
- (id)lottieAnimation;
- (void)setLottieAnimation:;
- (double)customAnimationSpeed;
- (void)setCustomAnimationSpeed:;
- (BOOL)isCurrentAnimationPlaying;
- (void)setColorProvider:for:;
- (void)setNumberProvider:for:;
- (void)setPointProvider:for:;
- (void)setSizeProvider:for:;
- (void)setPathProvider:for:;
- (void)animationView:isDisplayingFrame:;
- (id)initWithModel:inBundle:;
- (void)update:;
- (id)initWithFrame:;
- (id)initWithContentsOfURL:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
