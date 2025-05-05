@interface MPSCNNLogSoftMaxGradient : MPSCNNGradientKernel
- (unsigned long long)maxBatchSize;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
+ (id)libraryInfo:;
@end
