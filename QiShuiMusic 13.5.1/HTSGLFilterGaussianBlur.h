@interface HTSGLFilterGaussianBlur : HTSGLFilterTwoPassSamplingFilter
@property (nonatomic) double texelSpacingMultiplier;
@property (nonatomic) double blurRadiusInPixels;
@property (nonatomic) double blurRadiusAsFractionOfImageWidth;
@property (nonatomic) double blurRadiusAsFractionOfImageHeight;
@property (nonatomic) Q blurPasses;
@property (nonatomic) BOOL enableSubsampling;
- (unsigned long long)blurPasses;
- (double)blurRadiusAsFractionOfImageHeight;
- (double)blurRadiusAsFractionOfImageWidth;
- (double)blurRadiusInPixels;
- (BOOL)enableSubsampling;
- (void)renderToTextureWithVertices:textureCoordinates:;
- (void)setBlurPasses:;
- (void)setBlurRadiusAsFractionOfImageHeight:;
- (void)setBlurRadiusAsFractionOfImageWidth:;
- (void)setBlurRadiusInPixels:;
- (void)setEnableSubsampling:;
- (void)setTexelSpacingMultiplier:;
- (void)setupFilterForSize:;
- (id)sizeOfFBO;
- (void)switchToVertexShader:fragmentShader:;
- (double)texelSpacingMultiplier;
- (id)initWithContext:;
+ (id)fragmentShaderForOptimizedBlurOfRadius:sigma:;
+ (id)fragmentShaderForStandardBlurOfRadius:sigma:;
+ (id)vertexShaderForOptimizedBlurOfRadius:sigma:;
+ (id)vertexShaderForStandardBlurOfRadius:sigma:;
@end
