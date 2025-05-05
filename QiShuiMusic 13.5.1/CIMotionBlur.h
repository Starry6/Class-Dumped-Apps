@interface CIMotionBlur : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputRadius;
@property (nonatomic) NSNumber inputAngle;
- (void)setInputRadius:;
- (id)inputAngle;
- (id)inputImage;
- (id)_blur:pass:weightsFactor:legacyExtent:;
- (void)setInputImage:;
- (void)setInputAngle:;
- (BOOL)_isIdentity;
- (id)inputRadius;
- (id)_kernel;
- (id)outputImage;
+ (id)customAttributes;
@end
