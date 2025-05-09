@interface MPSCNNConvolutionTranspose : MPSCNNKernel
@property (nonatomic) Q featureChannelsLayout;
@property (nonatomic) Q weightsBufferLength;
@property (nonatomic) Q inputFeatureChannels;
@property (nonatomic) Q outputFeatureChannels;
@property (nonatomic) q kernelOffsetX;
@property (nonatomic) q kernelOffsetY;
@property (nonatomic) Q groups;
@property (nonatomic) Q accumulatorPrecisionOption;
@property (nonatomic) <MPSCNNConvolutionDataSource> dataSource;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (unsigned long long)featureChannelsLayout;
- (unsigned long long)groups;
- (id)resultStateForSourceImage:sourceStates:destinationImage:;
- (id)initialize:weights:fullyConnected:;
- (id)initialize:convolutionDescriptor:kernelWeights:biasTerms:flags:fullyConnected:;
- (id)resultStateBatchForSourceImage:sourceStates:destinationImage:;
- (id)initWithDevice:convolutionDescriptor:kernelWeights:biasTerms:flags:;
- (id)temporaryResultStateBatchForCommandBuffer:sourceImage:sourceStates:destinationImage:;
- (id)encodeToCommandBuffer:sourceImage:convolutionGradientState:destinationState:destinationStateIsTemporary:;
- (void)encodeToCommandBuffer:sourceImage:convolutionGradientState:destinationImage:;
- (id)encodeToCommandBuffer:sourceImage:destinationState:destinationStateIsTemporary:;
- (void)setAccumulatorPrecisionOption:;
- (unsigned long long)accumulatorPrecisionOption;
- (id)debugDescription;
- (id)initWithDevice:weights:;
- (void)copyToGradientState:sourceImage:sourceStates:destinationImage:;
- (void)encodeWithCoder:;
- (void)setKernelOffsetX:;
- (id)dataSource;
- (void)encodeToCommandBuffer:sourceImage:destinationState:destinationImage:;
- (void)reloadWeightsAndBiasesWithCommandBuffer:state:;
- (id)encodeBatchToCommandBuffer:sourceImages:convolutionGradientStates:;
- (id)encodeToCommandBuffer:sourceImage:convolutionState:;
- (void)reloadWeightsAndBiasesFromDataSource;
- (id)encodeBatchToCommandBuffer:sourceImages:convolutionGradientStates:destinationStates:destinationStateIsTemporary:;
- (void)encodeBatchToCommandBuffer:sourceImages:convolutionGradientStates:destinationImages:;
- (id)encodeToCommandBuffer:sourceImage:convolutionGradientState:;
- (long long)kernelOffsetY;
- (unsigned long long)weightsBufferLength;
- (void)encodeBatchToCommandBuffer:sourceImages:destinationStates:destinationImages:;
- (void)setKernelOffsetY:;
- (void)reloadWeightsAndBiasesWithDataSource:;
- (long long)kernelOffsetX;
- (BOOL)appendBatchBarrier;
- (id)encodeBatchToCommandBuffer:sourceImages:destinationStates:destinationStateIsTemporary:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:paddingMethod:sourceOffset:;
- (unsigned long long)outputFeatureChannels;
- (BOOL)isResultStateReusedAcrossBatch;
- (id)temporaryResultStateForCommandBuffer:sourceImage:sourceStates:destinationImage:;
- (unsigned long long)inputFeatureChannels;
- (id)exportWeightsAndBiasesWithCommandBuffer:resultStateCanBeTemporary:;
+ (BOOL)supportsSecureCoding;
+ (id)libraryInfo:;
@end
