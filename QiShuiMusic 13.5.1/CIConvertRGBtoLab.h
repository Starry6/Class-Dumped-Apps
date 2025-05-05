@interface CIConvertRGBtoLab : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputNormalize;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)inputNormalize;
- (void)setInputNormalize:;
+ (id)customAttributes;
@end
