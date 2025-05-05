@interface VKKeyboardCameraReticleView : UIView
@property (nonatomic) double spotlightBlurRadius;
@property (nonatomic) double invertedShadowAlpha;
@property (nonatomic) double reticleAlpha;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (double)spotlightBlurRadius;
- (void)setSpotlightBlurRadius:;
- (double)invertedShadowAlpha;
- (void)setInvertedShadowAlpha:;
- (void)setReticleRect:angle:;
- (void)collapseReticleRect;
- (double)reticleAlpha;
- (void)setReticleAlpha:;
+ (void)animate:;
@end
