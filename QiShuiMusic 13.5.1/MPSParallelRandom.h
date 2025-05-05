@interface MPSParallelRandom : MPSKernel
@property (nonatomic) Q distributionType;
@property (nonatomic) I destinationDataType;
- (id)initWithCoder:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (unsigned int)destinationDataType;
- (unsigned long long)distributionType;
- (void)setDistributionType:;
- (id)initWithDevice:destinationDataType:generatorType:distributionDescriptor:;
- (void)encodeToCommandBuffer:computeEncoder:destinationBuffer:destinationOffset:numEntries:;
- (void)encodeToCommandBuffer:computeEncoder:destinationBuffer:destinationOffset:numEntries:stride:;
- (void)encodeToCommandBuffer:destinationBuffer:destinationOffset:numEntries:;
- (void)encodeToCommandBuffer:destinationBuffer:destinationOffset:numEntries:stride:;
+ (id)libraryInfo:;
@end
