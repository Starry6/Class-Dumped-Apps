@interface CIGlassLozenge : CIFilter
@property (nonatomic) CIImage inputImage;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)_CILozengeRefraction;
+ (id)customAttributes;
@end
