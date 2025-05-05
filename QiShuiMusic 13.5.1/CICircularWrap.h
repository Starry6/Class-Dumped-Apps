@interface CICircularWrap : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputCenter;
@property (nonatomic) NSNumber inputRadius;
@property (nonatomic) NSNumber inputAngle;
- (void)setInputCenter:;
- (void)setInputRadius:;
- (id)inputAngle;
- (id)inputImage;
- (void)setInputImage:;
- (void)setInputAngle:;
- (id)inputCenter;
- (id)inputRadius;
- (id)_kernel;
- (id)outputImage;
+ (id)customAttributes;
@end
