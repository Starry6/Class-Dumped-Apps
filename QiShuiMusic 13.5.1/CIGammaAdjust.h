@interface CIGammaAdjust : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputPower;
- (id)inputImage;
- (void)setInputImage:;
- (BOOL)_isIdentity;
- (id)outputImage;
- (id)inputPower;
- (void)setInputPower:;
+ (id)customAttributes;
@end
