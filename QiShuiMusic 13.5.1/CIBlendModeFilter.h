@interface CIBlendModeFilter : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputBackgroundImage;
- (void)setInputBackgroundImage:;
- (id)inputImage;
- (void)setInputImage:;
- (id)inputBackgroundImage;
- (id)_kernel;
- (id)outputImage;
+ (id)customAttributes;
@end
