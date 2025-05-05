@interface CUIPSDLayerEffectGradientOverlay : CUIPSDLayerEffectComponent
@property (nonatomic) CUIPSDGradient gradient;
- (unsigned int)effectType;
- (id)init;
- (void)setGradient:;
- (void)dealloc;
- (id)gradient;
- (BOOL)updateLayerEffectPreset:error:;
- (id)initWithEffectFromPreset:atIndex:;
@end
