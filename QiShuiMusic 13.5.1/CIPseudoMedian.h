@interface CIPseudoMedian : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputRadius;
@property (nonatomic) NSNumber inputWeights;
- (void)setInputRadius:;
- (id)inputImage;
- (void)setInputWeights:;
- (void)setInputImage:;
- (id)inputWeights;
- (id)inputRadius;
- (id)outputImage;
+ (id)customAttributes;
@end
