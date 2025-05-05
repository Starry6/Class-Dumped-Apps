@interface CIColorMonochrome : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIColor inputColor;
@property (nonatomic) NSNumber inputIntensity;
- (id)inputImage;
- (void)setInputImage:;
- (id)_kernel;
- (id)outputImage;
- (id)inputIntensity;
- (void)setInputIntensity:;
- (id)inputColor;
- (void)setInputColor:;
+ (id)customAttributes;
@end
