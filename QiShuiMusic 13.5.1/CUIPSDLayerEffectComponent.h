@interface CUIPSDLayerEffectComponent : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) BOOL visible;
- (unsigned int)effectType;
- (BOOL)visible;
- (void)setVisible:;
- (void)dealloc;
- (void)setName:;
- (id)name;
- (BOOL)updateLayerEffectPreset:error:;
- (id)initWithEffectFromPreset:atIndex:;
- (id)_colorFromShapeEffectValue:;
@end
