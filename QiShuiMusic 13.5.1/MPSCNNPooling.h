@interface MPSCNNPooling : MPSCNNKernel
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)initWithDevice:kernelWidth:kernelHeight:strideInPixelsX:strideInPixelsY:;
- (id)debugDescription;
- (id)initWithDevice:kernelWidth:kernelHeight:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)newPlugin;
- (void)encodeBatchToCommandBuffer:sourceImages:destinationImages:;
- (void)encodeToCommandBuffer:sourceImage:destinationImage:;
- (id)encodeBatchToCommandBuffer:sourceImages:;
- (void)setKernelWidth:kernelHeight:strideInPixelsX:strideInPixelsY:;
- (id)encodeToCommandBuffer:sourceImage:;
+ (id)libraryInfo:;
@end
