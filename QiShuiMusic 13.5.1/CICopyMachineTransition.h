@interface CICopyMachineTransition : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputTargetImage;
@property (nonatomic) CIVector inputExtent;
@property (nonatomic) CIColor inputColor;
@property (nonatomic) NSNumber inputTime;
@property (nonatomic) NSNumber inputAngle;
@property (nonatomic) NSNumber inputWidth;
@property (nonatomic) NSNumber inputOpacity;
- (id)inputTime;
- (id)inputAngle;
- (id)inputImage;
- (void)setInputTime:;
- (void)setInputImage:;
- (void)setInputAngle:;
- (id)_kernel;
- (id)outputImage;
- (id)inputWidth;
- (id)inputTargetImage;
- (void)setInputTargetImage:;
- (id)inputExtent;
- (void)setInputExtent:;
- (void)setInputWidth:;
- (id)inputColor;
- (void)setInputColor:;
- (id)inputOpacity;
- (void)setInputOpacity:;
+ (id)customAttributes;
@end
