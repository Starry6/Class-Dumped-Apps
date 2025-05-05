@interface CIGaussianGradient : CIFilter
@property (nonatomic) CIVector inputCenter;
@property (nonatomic) CIColor inputColor0;
@property (nonatomic) CIColor inputColor1;
@property (nonatomic) NSNumber inputRadius;
- (id)inputColor1;
- (void)setInputCenter:;
- (void)setInputRadius:;
- (id)inputColor0;
- (void)setInputColor1:;
- (void)setInputColor0:;
- (id)inputCenter;
- (id)inputRadius;
- (id)_kernel;
- (id)outputImage;
+ (id)customAttributes;
@end
