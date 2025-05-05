@interface MPSCNNCrossChannelNormalization : MPSCNNKernel
@property (nonatomic) float alpha;
@property (nonatomic) float beta;
@property (nonatomic) float delta;
@property (nonatomic) Q kernelSize;
- (float)delta;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)setAlpha:;
- (float)beta;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void)setDelta:;
- (float)alpha;
- (id)initWithDevice:;
- (void)setBeta:;
- (void)encodeBatchToCommandBuffer:sourceImages:destinationImages:;
- (id)initWithDevice:kernelSize:;
- (void)encodeToCommandBuffer:sourceImage:destinationImage:;
- (id)encodeBatchToCommandBuffer:sourceImages:;
- (unsigned long long)kernelSize;
- (id)encodeToCommandBuffer:sourceImage:;
+ (id)libraryInfo:;
@end
