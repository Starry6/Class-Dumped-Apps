@interface CIEdgePreserveUpsampleFilter : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputSmallImage;
@property (nonatomic) NSNumber inputSpatialSigma;
@property (nonatomic) NSNumber inputLumaSigma;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)_kernelJointUpsamp;
- (id)_kernelJointUpsampRG;
- (id)_kernelGuideCombine;
- (id)_kernelGuideCombine4;
- (id)_kernelGuideMono;
- (id)inputSmallImage;
- (void)setInputSmallImage:;
- (id)inputSpatialSigma;
- (void)setInputSpatialSigma:;
- (id)inputLumaSigma;
- (void)setInputLumaSigma:;
+ (id)customAttributes;
@end
