@interface CIMedianFilter : CIFilter
@property (nonatomic) CIImage inputImage;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)_kernel3x3;
+ (id)customAttributes;
@end
