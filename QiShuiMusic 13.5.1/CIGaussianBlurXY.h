@interface CIGaussianBlurXY : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputSigmaX;
@property (nonatomic) NSNumber inputSigmaY;
- (id)inputImage;
- (void)setInputImage:;
- (BOOL)_isIdentity;
- (id)outputImage;
- (id)inputSigmaX;
- (void)setInputSigmaX:;
- (id)inputSigmaY;
- (void)setInputSigmaY:;
+ (id)customAttributes;
@end
