@interface UIStatusBarBackgroundView : UIView
- (void).cxx_destruct;
- (id)style;
- (id)initWithFrame:style:backgroundColor:;
- (void)setGlowAnimationEnabled:;
- (void)_setGlowAnimationEnabled:waitForNextCycle:;
- (void)setSuppressesGlow:;
- (BOOL)_styleCanGlow;
- (void)_startGlowAnimationWaitForNextCycle:;
- (void)_stopGlowAnimation;
- (id)_backgroundImageName;
- (id)_baseImage;
- (id)_glowImage;
@end
