@interface CIStretchCrop : CIFilter
@property (nonatomic) CIImage inputImage;
- (id)inputImage;
- (void)setInputImage:;
- (id)_kernel;
- (id)outputImage;
+ (id)customAttributes;
@end
