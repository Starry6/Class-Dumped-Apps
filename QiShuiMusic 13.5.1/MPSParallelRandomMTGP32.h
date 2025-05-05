@interface MPSParallelRandomMTGP32 : MPSParallelRandom
- (id)initWithCoder:device:;
- (void)dealloc;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)encodeToCommandBuffer:computeEncoder:destinationBuffer:destinationOffset:numEntries:;
- (void)encodeToCommandBuffer:computeEncoder:destinationBuffer:destinationOffset:numEntries:stride:;
- (id)initWithDevice:destinationDataType:seed:distributionDescriptor:;
- (id)initWithDevice:destinationDataType:seed:;
- (void)reinitializeDistributionDescriptor:;
- (void)resetSeedOnCommandBuffer:seed:;
- (void)synchronizeStateOnCommandBuffer:;
- (id)initWithDevice:destinationDataType:state:distributionDescriptor:;
- (id)exportState;
@end
