@interface CICheckerboardGenerator : CIFilter
@property (nonatomic) CIVector inputCenter;
@property (nonatomic) NSNumber inputWidth;
@property (nonatomic) NSNumber inputSharpness;
@property (nonatomic) CIColor inputColor0;
@property (nonatomic) CIColor inputColor1;
- (id)inputColor1;
- (void)setInputCenter:;
- (id)inputSharpness;
- (void)setInputSharpness:;
- (id)inputColor0;
- (void)setInputColor1:;
- (void)setInputColor0:;
- (id)inputCenter;
- (id)_kernel;
- (id)outputImage;
- (id)inputWidth;
- (void)setInputWidth:;
+ (id)customAttributes;
@end
