@interface CUIPSDLayerEffectOuterGlow : CUIPSDLayerEffectComponent
@property (nonatomic) NSInteger blendMode;
@property (nonatomic) double opacity;
@property (nonatomic) CUIColor color;
@property (nonatomic) Q blurSize;
@property (nonatomic) Q spread;
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
- (unsigned long long)blurSize;
- (void)setBlurSize:;
- (unsigned long long)spread;
- (void)setSpread:;
@end
