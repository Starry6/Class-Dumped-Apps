@interface CIConvolution5X5 : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputWeights;
@property (nonatomic) NSNumber inputBias;
- (id)inputBias;
- (void)setInputBias:;
- (id)inputImage;
- (void)setInputWeights:;
- (void)setInputImage:;
- (id)inputWeights;
- (BOOL)_isIdentity;
- (id)outputImage;
+ (id)customAttributes;
@end
