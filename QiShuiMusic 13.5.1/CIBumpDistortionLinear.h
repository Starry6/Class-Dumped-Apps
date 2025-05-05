@interface CIBumpDistortionLinear : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputCenter;
@property (nonatomic) NSNumber inputRadius;
@property (nonatomic) NSNumber inputAngle;
@property (nonatomic) NSNumber inputScale;
- (void)setInputCenter:;
- (void)setInputRadius:;
- (id)inputScale;
- (id)inputAngle;
- (void)setInputScale:;
- (id)inputImage;
- (void)setInputImage:;
- (void)setInputAngle:;
- (id)inputCenter;
- (id)inputRadius;
- (id)_kernel;
- (id)outputImage;
+ (id)customAttributes;
@end
