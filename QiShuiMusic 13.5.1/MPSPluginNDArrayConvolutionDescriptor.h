@interface MPSPluginNDArrayConvolutionDescriptor : NSObject
@property (nonatomic) {MPSPluginNDArrayConvolutionSizes=[3Q]} kernelSizes;
@property (nonatomic) {MPSPluginNDArrayConvolutionSizes=[3Q]} strides;
@property (nonatomic) {MPSPluginNDArrayConvolutionSizes=[3Q]} dilationRates;
@property (nonatomic) Q inputFeatureChannels;
@property (nonatomic) Q outputFeatureChannels;
@property (nonatomic) Q groups;
@property (nonatomic) Q channelMultiplier;
@property (nonatomic) Q subPixelScaleFactor;
@property (nonatomic) I dataFormat;
@property (nonatomic) I weightsFormat;
- (unsigned long long)groups;
- (unsigned long long)subPixelScaleFactor;
- (id)strides;
- (unsigned long long)channelMultiplier;
- (unsigned long long)outputFeatureChannels;
- (unsigned long long)inputFeatureChannels;
- (id)dilationRates;
- (id)kernelSizes;
- (unsigned int)dataFormat;
- (id)initWithKernelSizes:inputFeatureChannels:outputFeatureChannels:strides:dilationRates:groups:channelMultiplier:subPixelScaleFactor:dataFormat:weightsFormat:;
- (unsigned int)weightsFormat;
@end
