@interface MPSCNNUpsampleLinear : MPSCNNKernel
- (void)encodeToCommandBufferx:sourceImage:destinationImage:;
- (id)initWithDevice:library:resizeType:alignCorner:halfPixel:;
- (void).cxx_destruct;
@end
