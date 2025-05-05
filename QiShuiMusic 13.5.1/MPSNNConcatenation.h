@interface MPSNNConcatenation : MPSCNNKernel
- (id)initWithCoder:device:;
- (id)resultStateForSourceImage:sourceStates:destinationImage:;
- (id)resultStateBatchForSourceImage:sourceStates:destinationImage:;
- (id)temporaryResultStateBatchForCommandBuffer:sourceImage:sourceStates:destinationImage:;
- (void)copyToGradientState:sourceImage:sourceStates:destinationImage:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:paddingMethod:sourceOffset:;
- (BOOL)isResultStateReusedAcrossBatch;
- (id)temporaryResultStateForCommandBuffer:sourceImage:sourceStates:destinationImage:;
- (void)encodeToCommandBuffer:sourceImages:destinationImage:;
- (void)encodeBatchToCommandBuffer:sourceImages:destinationImage:;
- (id)resultStateForSourceImages:sourceStates:destinationImage:;
- (id)temporaryResultStateForCommandBuffer:sourceImages:sourceStates:destinationImage:;
- (id)temporaryResultStateBatchForCommandBuffer:sourceImages:sourceStates:destinationImage:;
- (id)resultStateBatchForSourceImages:sourceStates:destinationImage:;
- (void)copyToGradientState:sourceImages:sourceStates:destinationImage:;
+ (id)libraryInfo:;
@end
