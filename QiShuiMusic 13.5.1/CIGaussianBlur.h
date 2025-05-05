@interface CIGaussianBlur : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputRadius;
- (void)setInputRadius:;
- (id)inputImage;
- (void)setInputImage:;
- (BOOL)_isIdentity;
- (id)inputRadius;
- (id)outputImage;
+ (id)customAttributes;
@end
