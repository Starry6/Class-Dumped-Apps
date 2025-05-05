@interface MPSCNNBinaryConvolution : MPSCNNKernel
@property (nonatomic) Q inputFeatureChannels;
@property (nonatomic) Q outputFeatureChannels;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:paddingMethod:sourceOffset:;
- (unsigned long long)outputFeatureChannels;
- (unsigned long long)inputFeatureChannels;
- (id)initWithDevice:convolutionData:outputBiasTerms:outputScaleTerms:inputBiasTerms:inputScaleTerms:type:flags:;
- (void)createBuffersFromkernelWeights:inputBiasTerms:inputScaleTerms:outputBiasTerms:outputScaleTerms:useHalfPrecision:;
- (id)initWithDeviceImpl:convolutionDescriptor:kernelWeights:biasTerms:scaleValue:type:flags:;
- (id)initWithDevice:convolutionData:scaleValue:type:flags:;
- (id)initWithDeviceImpl:convolutionDescriptor:kernelWeights:outputBiasTerms:outputScaleTerms:inputBiasTerms:inputScaleTerms:type:flags:;
- (id)copyBuffer:device:;
+ (id)libraryInfo:;
@end
