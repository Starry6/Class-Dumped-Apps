@interface MPSCNNNormalizationMeanAndVarianceState : MPSState
@property (nonatomic) <MTLBuffer> mean;
@property (nonatomic) <MTLBuffer> variance;
- (id)mean;
- (id)variance;
- (id)initWithMean:variance:;
- (id)initWithDevice:bufferSize:;
+ (id)temporaryStateWithCommandBuffer:bufferSize:;
+ (id)temporaryStateWithCommandBuffer:numberOfFeatureChannels:;
@end
