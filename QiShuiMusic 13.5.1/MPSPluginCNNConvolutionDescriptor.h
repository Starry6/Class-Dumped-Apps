@interface MPSPluginCNNConvolutionDescriptor : NSObject
@property (nonatomic) Q kernelWidth;
@property (nonatomic) Q kernelHeight;
@property (nonatomic) Q inputFeatureChannels;
@property (nonatomic) Q outputFeatureChannels;
@property (nonatomic) Q strideInPixelsX;
@property (nonatomic) Q strideInPixelsY;
@property (nonatomic) Q groups;
@property (nonatomic) Q dilationRateX;
@property (nonatomic) Q dilationRateY;
@property (nonatomic) MPSNNNeuronDescriptor fusedNeuronDescriptor;
@property (nonatomic) Q channelMultiplier;
@property (nonatomic) Q subPixelScaleFactor;
@property (nonatomic) BOOL isFullyConnected;
@property (nonatomic) BOOL isConvolutionTranspose;
- (unsigned long long)dilationRateX;
- (void)dealloc;
- (unsigned long long)groups;
- (unsigned long long)subPixelScaleFactor;
- (unsigned long long)strideInPixelsY;
- (unsigned long long)channelMultiplier;
- (unsigned long long)strideInPixelsX;
- (unsigned long long)kernelHeight;
- (id)fusedNeuronDescriptor;
- (unsigned long long)outputFeatureChannels;
- (unsigned long long)dilationRateY;
- (unsigned long long)kernelWidth;
- (unsigned long long)inputFeatureChannels;
- (BOOL)isConvolutionTranspose;
- (id)initWithKernelWidth:kernelHeight:inputFeatureChannels:outputFeatureChannels:strideInPixelsX:strideInPixelsY:groups:dilationRateX:dilationRateY:channelMultiplier:subPixelScaleFactor:isFullyConnected:isConvolutionTranspose:fusedNeuronDescriptor:;
- (BOOL)isFullyConnected;
@end
