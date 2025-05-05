@interface MPSNNReduceFeatureChannelsAndWeightsMean : MPSNNReduceBinary
- (id)initWithCoder:device:;
- (id)initWithDevice:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:paddingMethod:primaryOffset:secondaryOffset:kernelOffset:;
@end
