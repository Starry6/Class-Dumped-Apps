@interface MPSNNReduceFeatureChannelsAndWeightsSum : MPSNNReduceBinary
@property (nonatomic) BOOL doWeightedSumByNonZeroWeights;
- (id)initWithCoder:device:;
- (id)initWithDevice:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:paddingMethod:primaryOffset:secondaryOffset:kernelOffset:;
- (id)initWithDevice:doWeightedSumByNonZeroWeights:;
- (BOOL)doWeightedSumByNonZeroWeights;
@end
