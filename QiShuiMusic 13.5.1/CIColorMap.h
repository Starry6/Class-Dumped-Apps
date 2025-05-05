@interface CIColorMap : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputGradientImage;
- (id)inputImage;
- (void)setInputImage:;
- (id)_kernel;
- (id)outputImage;
- (id)inputGradientImage;
- (void)setInputGradientImage:;
+ (id)customAttributes;
@end
