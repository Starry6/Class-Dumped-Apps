@interface MPSCNNBinaryFullyConnected : MPSCNNBinaryConvolution
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)initWithDevice:convolutionData:outputBiasTerms:outputScaleTerms:inputBiasTerms:inputScaleTerms:type:flags:;
- (id)initWithDevice:convolutionData:scaleValue:type:flags:;
- (id)initWithDeviceImpl:convolutionDescriptor:kernelWeights:outputBiasTerms:outputScaleTerms:inputBiasTerms:inputScaleTerms:type:flags:;
- (id)initWithDeviceImpl:convolutionDescriptor:kernelWeights:scaleValue:type:flags:;
@end
