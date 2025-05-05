@interface MPSMatrixFullyConnectedGradient : MPSMatrixBinaryKernel
@property (nonatomic) Q sourceNumberOfFeatureVectors;
@property (nonatomic) Q sourceOutputFeatureChannels;
@property (nonatomic) Q sourceInputFeatureChannels;
@property (nonatomic) double alpha;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)setAlpha:;
- (void)encodeWithCoder:;
- (double)alpha;
- (id)initWithDevice:;
- (void)setSourceOutputFeatureChannels:;
- (void)setSourceInputFeatureChannels:;
- (void)encodeGradientForDataToCommandBuffer:gradientMatrix:weightMatrix:resultGradientForDataMatrix:;
- (void)encodeGradientForWeightsAndBiasToCommandBuffer:gradientMatrix:inputMatrix:resultGradientForWeightMatrix:resultGradientForBiasVector:;
- (unsigned long long)sourceNumberOfFeatureVectors;
- (void)setSourceNumberOfFeatureVectors:;
- (unsigned long long)sourceInputFeatureChannels;
- (unsigned long long)sourceOutputFeatureChannels;
+ (id)libraryInfo:;
@end
