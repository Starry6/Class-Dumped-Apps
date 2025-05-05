@interface MPSCNNInstanceNormalizationGradientState : MPSNNGradientState
@property (nonatomic) MPSCNNInstanceNormalization instanceNormalization;
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
- (id)instanceNormalization;
- (id)initWithDevice:numberOfFeatureChannels:instanceNormalization:;
+ (id)temporaryStateWithCommandBuffer:numberOfFeatureChannels:instanceNormalization:;
@end
