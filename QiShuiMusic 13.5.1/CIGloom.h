@interface CIGloom : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputRadius;
@property (nonatomic) NSNumber inputIntensity;
- (void)setInputRadius:;
- (id)inputImage;
- (void)setInputImage:;
- (BOOL)_isIdentity;
- (id)inputRadius;
- (id)_kernel;
- (id)outputImage;
- (id)inputIntensity;
- (void)setInputIntensity:;
+ (id)customAttributes;
@end
