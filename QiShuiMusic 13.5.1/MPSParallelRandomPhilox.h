@interface MPSParallelRandomPhilox : MPSParallelRandom
- (id)initWithCoder:device:;
- (void)dealloc;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)encodeToCommandBuffer:computeEncoder:destinationBuffer:destinationOffset:numEntries:;
- (void)encodeToCommandBuffer:destinationBuffer:destinationOffset:numEntries:;
- (void)encodeToCommandBuffer:destinationBuffer:destinationOffset:numEntries:stride:;
- (id)initWithDevice:destinationDataType:seed:distributionDescriptor:;
- (id)initWithDevice:destinationDataType:seed:;
@end
