@interface VERLTextureMVPRenderer : VERLBaseRenderer
@property (nonatomic) ^v renderer;
- (void)setEnableBlend:;
- (void)deInit;
- (void)render:config:;
- (int)rlFactorFromVEFactor:;
- (void)setBlendSFactor:dFactor:;
- (void)syncTransformValues;
- (id)renderer;
- (void)dealloc;
- (id)initWithContext:;
@end
