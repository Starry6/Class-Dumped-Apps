@interface CIWhitePointAdjust : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIColor inputColor;
- (id)inputImage;
- (void)setInputImage:;
- (BOOL)_isIdentity;
- (id)_kernel;
- (id)outputImage;
- (id)inputColor;
- (void)setInputColor:;
+ (id)customAttributes;
@end
