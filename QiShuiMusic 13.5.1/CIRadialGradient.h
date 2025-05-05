@interface CIRadialGradient : CIFilter
@property (nonatomic) CIVector inputCenter;
@property (nonatomic) NSNumber inputRadius0;
@property (nonatomic) NSNumber inputRadius1;
@property (nonatomic) CIColor inputColor0;
@property (nonatomic) CIColor inputColor1;
- (id)inputColor1;
- (void)setInputCenter:;
- (id)inputColor0;
- (void)setInputColor1:;
- (void)setInputColor0:;
- (id)inputCenter;
- (id)_kernel;
- (id)outputImage;
- (id)inputRadius0;
- (void)setInputRadius0:;
- (id)inputRadius1;
- (void)setInputRadius1:;
+ (id)customAttributes;
@end
