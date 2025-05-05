@interface CIFaceBalance : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputOrigI;
@property (nonatomic) NSNumber inputOrigQ;
@property (nonatomic) NSNumber inputStrength;
@property (nonatomic) NSNumber inputWarmth;
- (id)_outputProperties;
- (id)inputImage;
- (id)_initFromProperties:;
- (void)setInputImage:;
- (BOOL)_isIdentity;
- (id)_kernel;
- (id)outputImage;
- (id)inputStrength;
- (void)setInputStrength:;
- (id)inputWarmth;
- (void)setInputWarmth:;
- (id)inputOrigI;
- (void)setInputOrigI:;
- (id)inputOrigQ;
- (void)setInputOrigQ:;
+ (id)customAttributes;
@end
