@interface CIColorPolynomial : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputRedCoefficients;
@property (nonatomic) CIVector inputGreenCoefficients;
@property (nonatomic) CIVector inputBlueCoefficients;
@property (nonatomic) CIVector inputAlphaCoefficients;
- (id)inputImage;
- (void)setInputImage:;
- (BOOL)_isIdentity;
- (id)_kernel;
- (id)outputImage;
- (id)_kernelRGB;
- (BOOL)_isIdentityAlpha;
- (id)inputRedCoefficients;
- (void)setInputRedCoefficients:;
- (id)inputGreenCoefficients;
- (void)setInputGreenCoefficients:;
- (id)inputBlueCoefficients;
- (void)setInputBlueCoefficients:;
- (id)inputAlphaCoefficients;
- (void)setInputAlphaCoefficients:;
+ (id)customAttributes;
@end
