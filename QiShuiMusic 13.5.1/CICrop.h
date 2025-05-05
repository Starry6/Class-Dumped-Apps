@interface CICrop : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputRectangle;
- (id)_outputProperties;
- (id)inputImage;
- (id)_initFromProperties:;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputRectangle;
- (void)setInputRectangle:;
+ (id)customAttributes;
@end
