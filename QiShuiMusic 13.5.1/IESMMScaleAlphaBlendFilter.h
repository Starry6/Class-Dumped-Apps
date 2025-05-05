@interface IESMMScaleAlphaBlendFilter : HTSGLFilterTwoInput
@property (nonatomic) double mix;
- (void)setMix:;
- (double)mix;
- (void)initializeRenderer:;
- (void)renderToTextureWithVertices:textureCoordinates:;
- (id)initWithContext:;
@end
