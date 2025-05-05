@interface CUIPSDLayerEffectColorOverlay : CUIPSDLayerEffectComponent
@property (nonatomic) NSInteger blendMode;
@property (nonatomic) CUIColor color;
@property (nonatomic) double opacity;
- (unsigned int)effectType;
- (void)setOpacity:;
- (id)init;
- (void)dealloc;
- (void)setColor:;
- (double)opacity;
- (id)color;
- (void)setBlendMode:;
- (int)blendMode;
- (id)description;
- (BOOL)updateLayerEffectPreset:error:;
- (id)initWithEffectFromPreset:atIndex:;
@end
