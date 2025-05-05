@interface MPSRNNSingleGateDescriptor : MPSRNNDescriptor
@property (nonatomic) <MPSCNNConvolutionDataSource> inputWeights;
@property (nonatomic) <MPSCNNConvolutionDataSource> recurrentWeights;
- (id)init;
- (void)dealloc;
- (void)setInputWeights:;
- (id)inputWeights;
- (id)initWithInputFeatureChannels:outputFeatureChannels:;
- (id)recurrentWeights;
- (void)setRecurrentWeights:;
+ (id)createRNNSingleGateDescriptorWithInputFeatureChannels:outputFeatureChannels:;
@end
