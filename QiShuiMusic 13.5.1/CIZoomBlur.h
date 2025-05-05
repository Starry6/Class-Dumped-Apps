@interface CIZoomBlur : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputCenter;
@property (nonatomic) NSNumber inputAmount;
- (void)setInputAmount:;
- (id)inputAmount;
- (void)setInputCenter:;
- (id)valueForUndefinedKey:;
- (void)setValue:forUndefinedKey:;
- (id)inputImage;
- (void)setInputImage:;
- (BOOL)_isIdentity;
- (id)inputCenter;
- (id)_kernel;
- (id)outputImage;
- (id)_kernelNew;
- (id)_blur:pass:weightsFactor:;
+ (id)customAttributes;
@end
