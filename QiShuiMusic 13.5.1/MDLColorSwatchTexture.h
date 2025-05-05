@interface MDLColorSwatchTexture : MDLTexture
- (id)generateDataAtLevel:selector:;
- (id)initWithColorTemperatureGradientFrom:toColorTemperature:name:textureDimensions:;
- (id)initWithColorGradientFrom:toColor:name:textureDimensions:;
@end
