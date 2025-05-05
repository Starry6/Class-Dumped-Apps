@interface MPSRNNImageInferenceLayer : MPSCNNKernel
@property (nonatomic) Q inputFeatureChannels;
@property (nonatomic) Q outputFeatureChannels;
@property (nonatomic) Q numberOfLayers;
@property (nonatomic) BOOL recurrentOutputIsTemporary;
@property (nonatomic) BOOL storeAllIntermediateStates;
@property (nonatomic) Q bidirectionalCombineMode;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (void)encodeWithCoder:;
- (unsigned long long)outputFeatureChannels;
- (unsigned long long)inputFeatureChannels;
- (unsigned long long)numberOfLayers;
- (void)setRecurrentOutputIsTemporary:;
- (id)initWithDevice:rnnDescriptor:;
- (id)initWithDevice:rnnDescriptors:;
- (void)encodeSequenceToCommandBuffer:sourceImages:destinationImages:recurrentInputState:recurrentOutputStates:;
- (void)encodeBidirectionalSequenceToCommandBuffer:sourceSequence:destinationForwardImages:destinationBackwardImages:;
- (BOOL)recurrentOutputIsTemporary;
- (BOOL)storeAllIntermediateStates;
- (void)setStoreAllIntermediateStates:;
- (unsigned long long)bidirectionalCombineMode;
- (void)setBidirectionalCombineMode:;
+ (id)libraryInfo:;
@end
