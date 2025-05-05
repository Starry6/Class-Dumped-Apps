@interface MPSCNNGroupNormalizationGradientState : MPSNNGradientState
@property (nonatomic) MPSCNNGroupNormalization groupNormalization;
@property (nonatomic) <MTLBuffer> gamma;
@property (nonatomic) <MTLBuffer> beta;
@property (nonatomic) <MTLBuffer> gradientForGamma;
@property (nonatomic) <MTLBuffer> gradientForBeta;
- (void)dealloc;
- (id)beta;
- (id)debugDescription;
- (id)gamma;
- (id)gradientForBeta;
- (id)gradientForGamma;
- (id)initWithDevice:numberOfFeatureChannels:groupNormalization:;
- (id)groupNormalization;
+ (id)temporaryStateWithCommandBuffer:numberOfFeatureChannels:groupNormalization:;
@end
