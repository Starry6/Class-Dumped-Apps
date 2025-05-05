@interface CILabDeltaE : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputImage2;
- (id)inputImage;
- (void)setInputImage:;
- (id)_kernel;
- (id)outputImage;
- (id)inputImage2;
- (void)setInputImage2:;
+ (id)customAttributes;
@end
