@interface MPSCNNFullyConnected : MPSCNNConvolution
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (id)initWithDevice:convolutionDescriptor:kernelWeights:biasTerms:flags:fullyConnected:convolutionTranspose:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:paddingMethod:sourceOffset:kernelOffset:;
- (id)initWithDevice:convolutionDescriptor:kernelWeights:biasTerms:flags:;
- (id)initWithDevice:weights:;
- (id)initWithDevice:convolutionDescriptor:kernelWeights:biasTerms:flags:fullyConnected:;
- (id)initWithDevice:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:paddingMethod:sourceOffset:;
- (id)initWithDevice:weights:fullyConnected:convolutionTranspose:;
- (id)initWithDevice:weights:fullyConnected:;
@end
