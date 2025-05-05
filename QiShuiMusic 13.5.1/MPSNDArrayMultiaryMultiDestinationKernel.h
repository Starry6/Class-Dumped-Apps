@interface MPSNDArrayMultiaryMultiDestinationKernel : MPSNDArrayMultiaryMultiDestinationBase
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeToCommandEncoder:commandBuffer:sourceArrays:destinationArrays:;
- (void)encodeToCommandEncoder:commandBuffer:sourceArrays:destinationArrays:activeDestinationMask:;
- (id)initWithDevice:sourceCount:destinationCount:;
- (void)encodeToCommandBuffer:sourceArrays:destinationArrays:;
@end
