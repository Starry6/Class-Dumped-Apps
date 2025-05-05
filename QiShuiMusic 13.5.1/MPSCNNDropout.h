@interface MPSCNNDropout : MPSCNNKernel
@property (nonatomic) float keepProbability;
@property (nonatomic) Q seed;
@property (nonatomic) {?=QQQ} maskStrideInPixels;
- (unsigned long long)seed;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (id)resultStateForSourceImage:sourceStates:destinationImage:;
- (id)resultStateBatchForSourceImage:sourceStates:destinationImage:;
- (id)temporaryResultStateBatchForCommandBuffer:sourceImage:sourceStates:destinationImage:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)temporaryResultStateForCommandBuffer:sourceImage:sourceStates:destinationImage:;
- (id)initWithDevice:keepProbability:seed:maskStrideInPixels:;
- (void)resetSeedOnCommandBuffer:seed:;
- (id)initWithDevice:keepProbability:state:maskStrideInPixels:;
- (void)synchronizeRandomStateOnCommandBuffer:;
- (id)exportRandomState;
- (id)privateResultStateForSourceImage:sourceStates:destinationImage:commandBuffer:isTemporary:;
- (float)keepProbability;
- (id)maskStrideInPixels;
+ (id)libraryInfo:;
@end
