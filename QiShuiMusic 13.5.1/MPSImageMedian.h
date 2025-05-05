@interface MPSImageMedian : MPSUnaryImageKernel
@property (nonatomic) Q kernelDiameter;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)sourceRegionForDestinationSize:;
- (void)encodeWithCoder:;
- (id)initWithDevice:kernelDiameter:;
- (id)initWithDevice:;
- (void)initEncoder;
- (unsigned long long)kernelDiameter;
+ (id)libraryInfo:;
+ (unsigned long long)maxKernelDiameter;
+ (unsigned long long)minKernelDiameter;
@end
