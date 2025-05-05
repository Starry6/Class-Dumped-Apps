@interface CIVibrance : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputAmount;
- (id)_kernelPos;
- (void)setInputAmount:;
- (id)inputAmount;
- (id)_outputProperties;
- (id)inputImage;
- (id)_initFromProperties:;
- (void)setInputImage:;
- (id)_kernelNeg;
- (BOOL)_isIdentity;
- (id)outputImage;
+ (id)customAttributes;
@end
