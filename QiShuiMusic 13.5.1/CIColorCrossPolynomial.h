@interface CIColorCrossPolynomial : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputRedCoefficients;
@property (nonatomic) CIVector inputGreenCoefficients;
@property (nonatomic) CIVector inputBlueCoefficients;
- (id)inputImage;
- (void)setInputImage:;
- (BOOL)_isIdentity;
- (id)_kernel;
- (id)outputImage;
- (id)inputRedCoefficients;
- (void)setInputRedCoefficients:;
- (id)inputGreenCoefficients;
- (void)setInputGreenCoefficients:;
- (id)inputBlueCoefficients;
- (void)setInputBlueCoefficients:;
+ (id)customAttributes;
@end
