@interface WebTextIndicatorLayer : CALayer
@property (nonatomic) BOOL fadingOut;
- (void)present;
- (void).cxx_destruct;
- (id).cxx_construct;
- (double)_animationDuration;
- (void)setAnimationProgress:;
- (BOOL)indicatorWantsBounce:;
- (BOOL)indicatorWantsManualAnimation:;
- (id)initWithFrame:textIndicator:margin:offset:;
- (BOOL)hasCompletedAnimation;
- (void)hideWithCompletionHandler:;
- (BOOL)isFadingOut;
- (void)setFadingOut:;
@end
