@interface CILinearGradient : CIFilter
@property (nonatomic) CIVector inputPoint0;
@property (nonatomic) CIVector inputPoint1;
@property (nonatomic) CIColor inputColor0;
@property (nonatomic) CIColor inputColor1;
- (id)inputColor1;
- (id)inputColor0;
- (void)setInputColor1:;
- (void)setInputColor0:;
- (id)_kernel;
- (id)outputImage;
- (id)inputPoint0;
- (id)inputPoint1;
- (void)setInputPoint0:;
- (void)setInputPoint1:;
+ (id)customAttributes;
@end
