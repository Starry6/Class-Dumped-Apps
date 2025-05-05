@interface CIColorThresholdOtsu : CIFilter
@property (nonatomic) CIImage inputImage;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
+ (id)customAttributes;
@end
