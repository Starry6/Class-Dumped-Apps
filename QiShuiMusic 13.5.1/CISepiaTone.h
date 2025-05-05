@interface CISepiaTone : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputIntensity;
- (id)inputImage;
- (void)setInputImage:;
- (BOOL)_isIdentity;
- (id)_kernel;
- (id)outputImage;
- (id)inputIntensity;
- (void)setInputIntensity:;
+ (id)customAttributes;
@end
