@interface CICircleSplashDistortion : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputCenter;
@property (nonatomic) NSNumber inputRadius;
- (void)setInputCenter:;
- (void)setInputRadius:;
- (id)inputImage;
- (void)setInputImage:;
- (id)inputCenter;
- (id)inputRadius;
- (id)_kernel;
- (id)outputImage;
+ (id)customAttributes;
@end
