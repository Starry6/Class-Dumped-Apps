@interface CIMix : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputBackgroundImage;
@property (nonatomic) NSNumber inputAmount;
- (void)setInputBackgroundImage:;
- (void)setInputAmount:;
- (id)inputAmount;
- (id)inputImage;
- (void)setInputImage:;
- (id)inputBackgroundImage;
- (id)_kernel;
- (id)outputImage;
+ (id)customAttributes;
@end
