@interface CIColorControls : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputSaturation;
@property (nonatomic) NSNumber inputBrightness;
@property (nonatomic) NSNumber inputContrast;
- (void)setInputBrightness:;
- (id)inputContrast;
- (id)inputImage;
- (void)setInputImage:;
- (void)setInputContrast:;
- (id)inputBrightness;
- (id)outputImage;
- (id)inputSaturation;
- (void)setInputSaturation:;
+ (id)customAttributes;
@end
