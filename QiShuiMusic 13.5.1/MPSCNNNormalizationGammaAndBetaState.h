@interface MPSCNNNormalizationGammaAndBetaState : MPSState
@property (nonatomic) <MTLBuffer> gamma;
@property (nonatomic) <MTLBuffer> beta;
- (id)beta;
- (id)gamma;
- (id)initWithGamma:beta:;
- (id)initWithDevice:bufferSize:;
+ (id)temporaryStateWithCommandBuffer:bufferSize:;
+ (id)temporaryStateWithCommandBuffer:numberOfFeatureChannels:;
@end
