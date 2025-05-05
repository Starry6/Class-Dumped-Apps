@interface CICircularScreen : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputCenter;
@property (nonatomic) NSNumber inputWidth;
@property (nonatomic) NSNumber inputSharpness;
- (void)setInputCenter:;
- (id)inputSharpness;
- (void)setInputSharpness:;
- (id)inputImage;
- (void)setInputImage:;
- (id)inputCenter;
- (id)_kernel;
- (id)outputImage;
- (id)inputWidth;
- (void)setInputWidth:;
+ (id)customAttributes;
@end
