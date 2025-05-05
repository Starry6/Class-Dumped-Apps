@interface VERLTextureRenderer : VERLBaseRenderer
@property (nonatomic) ^v renderer;
- (void)setEnableBlend:;
- (void)deInit;
- (void)render:config:;
- (int)rlFactorFromVEFactor:;
- (void)setBlendSFactor:dFactor:;
- (void)setRenderer:;
- (id)renderer;
- (void)dealloc;
- (id)initWithContext:;
@end
