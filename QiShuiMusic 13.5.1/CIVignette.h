@interface CIVignette : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputIntensity;
@property (nonatomic) NSNumber inputRadius;
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
