@interface MPSNNPermuteGradient : MPSCNNGradientKernel
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)encodeBatchToCommandEncoder:commandBuffer:primaryImages:secondaryImages:inStates:destinationImages:;
- (void)encodeBatchToCommandBuffer:primaryImages:secondaryImages:inStates:destinationImages:;
+ (id)libraryInfo:;
@end
