@interface GLKEffectPropertyConstantColor : GLKEffectProperty
@property (nonatomic) C enabled;
@property (nonatomic) (_GLKVector4={?=ffff}{?=ffff}{?=ffff}[4f]) color;
- (id)init;
- (void)dealloc;
- (unsigned char)enabled;
- (void)setColor:;
- (id)color;
- (void)setEnabled:;
- (id)description;
- (void)bind;
- (void)dirtyAllUniforms;
- (void)setShaderBindings;
+ (void)setStaticMasksWithVshRoot:fshRoot:;
@end
