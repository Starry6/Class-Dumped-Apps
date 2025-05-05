@interface CIColorMatrix : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputRVector;
@property (nonatomic) CIVector inputGVector;
@property (nonatomic) CIVector inputBVector;
@property (nonatomic) CIVector inputAVector;
@property (nonatomic) CIVector inputBiasVector;
- (id)inputGVector;
- (void)setInputBiasVector:;
- (id)inputRVector;
- (id)inputBiasVector;
- (id)inputImage;
- (void)setInputImage:;
- (id)inputBVector;
- (void)setInputBVector:;
- (void)setInputRVector:;
- (void)setInputAVector:;
- (void)setInputGVector:;
- (id)inputAVector;
- (id)outputImage;
+ (id)customAttributes;
@end
