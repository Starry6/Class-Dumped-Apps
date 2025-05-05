@interface CIKaleidoscope : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputCount;
@property (nonatomic) CIVector inputCenter;
@property (nonatomic) NSNumber inputAngle;
- (void)setInputCount:;
- (id)inputCount;
- (void)setInputCenter:;
- (id)inputAngle;
- (id)inputImage;
- (void)setInputImage:;
- (void)setInputAngle:;
- (id)inputCenter;
- (id)_kernel;
- (id)outputImage;
- (id)_outputExtent;
+ (id)customAttributes;
@end
