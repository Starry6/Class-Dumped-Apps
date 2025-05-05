@interface CISharpenLuminance : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputSharpness;
@property (nonatomic) NSNumber inputRadius;
- (void)setInputRadius:;
- (id)inputSharpness;
- (void)setInputSharpness:;
- (id)inputImage;
- (void)setInputImage:;
- (BOOL)_isIdentity;
- (id)inputRadius;
- (id)_kernel;
- (id)outputImage;
+ (id)customAttributes;
@end
