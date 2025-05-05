@interface MPSNDArrayGatherND : MPSNDArrayBinaryKernel
@property (nonatomic) Q batchDimensions;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)setBatchDimensions:;
- (void)encodeToCommandBuffer:primarySourceArray:secondarySourceArray:destinationArray:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (id)dimensionsNotToBeBroadcast;
- (unsigned long long)batchDimensions;
+ (id)libraryInfo:;
@end
