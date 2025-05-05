@interface MPSCNNPoolingGradient : MPSCNNGradientKernel
@property (nonatomic) {?=QQQ} sourceSize;
- (unsigned long long)maxBatchSize;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)initWithDevice:kernelWidth:kernelHeight:strideInPixelsX:strideInPixelsY:;
- (id)initWithDevice:kernelWidth:kernelHeight:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)sourceSize;
- (void)setSourceSize:;
- (void)setKernelWidth:kernelHeight:strideInPixelsX:strideInPixelsY:;
+ (id)libraryInfo:;
@end
