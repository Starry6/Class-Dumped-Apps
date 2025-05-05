@interface CIHighlightShadowAdjust : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputRadius;
@property (nonatomic) NSNumber inputShadowAmount;
@property (nonatomic) NSNumber inputHighlightAmount;
- (void)setDefaults;
- (int)_maxVersion;
- (id)_kernelSH_v1;
- (id)_kernelSHnoB_v0;
- (void)setInputShadowAmount:;
- (id)_outputProperties;
- (void)setInputRadius:;
- (id)_kernelSH_v0;
- (id)inputImage;
- (id)inputShadowAmount;
- (id)_initFromProperties:;
- (void)setInputImage:;
- (id)_kernelSHnoB_v1;
- (id)_kernelSH_v2;
- (id)_kernelSHnoB_v2;
- (BOOL)_isIdentity;
- (id)inputHighlightAmount;
- (int)_defaultVersion;
- (id)_kernelSnoB_v0;
- (id)inputRadius;
- (void)setInputHighlightAmount:;
- (id)outputImage;
+ (id)customAttributes;
@end
