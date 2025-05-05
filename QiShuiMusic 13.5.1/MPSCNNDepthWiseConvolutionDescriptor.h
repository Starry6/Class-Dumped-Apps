@interface MPSCNNDepthWiseConvolutionDescriptor : MPSCNNConvolutionDescriptor
@property (nonatomic) Q channelMultiplier;
- (id)init;
- (id)debugDescription;
- (unsigned long long)channelMultiplier;
- (id)initWithKernelWidth:kernelHeight:inputFeatureChannels:outputFeatureChannels:;
@end
