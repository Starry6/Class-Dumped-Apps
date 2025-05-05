@interface VKCImageSubjectGlowLayer : CALayer
@property (nonatomic) CALayer glowLayer;
@property (nonatomic) BOOL active;
- (BOOL)active;
- (id)init;
- (void)renderGlowParameters:path:pathLength:duration:maxStrokeLengthFraction:;
- (id)thinGlowParametersWithScreenScale:viewScale:;
- (void)beginAnimationWithViewScale:screenScale:path:;
- (id)animationGroupWithDuration:beginTime:animations:;
- (void)stopAnimationAnimated:;
- (void)hideGlow:;
- (void).cxx_destruct;
- (void)configureAnimationWithViewScale:screenScale:path:;
- (id)glowLayer;
- (void)setActive:;
- (id)thickGlowParametersWithViewScale:;
- (id)animationWithKeyPath:beginTime:duration:;
- (id)shapeLayerLineWidth:opacity:path:;
- (void)setGlowLayer:;
@end
