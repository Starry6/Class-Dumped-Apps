@interface MPSNDArrayGatherNDGradient : MPSNDArrayBinaryPrimaryGradientKernel
@property (nonatomic) Q batchDimensions;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)setBatchDimensions:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (id)dimensionsNotToBeBroadcast;
- (unsigned long long)batchDimensions;
+ (id)libraryInfo:;
@end
