@interface CITemperatureAndTint : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputNeutral;
@property (nonatomic) CIVector inputTargetNeutral;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputNeutral;
- (void)setInputNeutral:;
- (id)inputTargetNeutral;
- (void)setInputTargetNeutral:;
+ (id)customAttributes;
@end
