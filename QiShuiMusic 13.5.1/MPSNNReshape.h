@interface MPSNNReshape : MPSCNNKernel
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:paddingMethod:sourceOffset:;
- (id)encodeToCommandBuffer:sourceImage:reshapedWidth:reshapedHeight:reshapedFeatureChannels:;
- (id)encodeToCommandBuffer:sourceImage:destinationState:destinationStateIsTemporary:reshapedWidth:reshapedHeight:reshapedFeatureChannels:;
- (id)encodeBatchToCommandBuffer:sourceImages:reshapedWidth:reshapedHeight:reshapedFeatureChannels:;
- (id)encodeBatchToCommandBuffer:sourceImages:destinationStates:destinationStateIsTemporary:reshapedWidth:reshapedHeight:reshapedFeatureChannels:;
+ (id)libraryInfo:;
@end
