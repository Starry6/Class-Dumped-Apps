@interface CIModTransition : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputTargetImage;
@property (nonatomic) CIVector inputCenter;
@property (nonatomic) NSNumber inputTime;
@property (nonatomic) NSNumber inputAngle;
@property (nonatomic) NSNumber inputRadius;
@property (nonatomic) NSNumber inputCompression;
- (void)setInputCenter:;
- (id)inputTime;
- (void)setInputRadius:;
- (id)inputAngle;
- (id)inputImage;
- (void)setInputTime:;
- (void)setInputImage:;
- (void)setInputAngle:;
- (id)inputCenter;
- (id)inputRadius;
- (id)_kernel;
- (id)outputImage;
- (id)inputTargetImage;
- (void)setInputTargetImage:;
- (id)inputCompression;
- (void)setInputCompression:;
+ (id)customAttributes;
@end
