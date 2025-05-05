@interface MPSCNNFullyConnectedGradient : MPSCNNConvolutionGradient
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (id)initWithDevice:weights:;
- (id)initWithDevice:;
- (id)initWithDevice:weights:fullyConnected:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:paddingMethod:primaryOffset:secondaryOffset:kernelOffset:;
- (id)initWithDevice:weights:convolutionTranspose:;
@end
