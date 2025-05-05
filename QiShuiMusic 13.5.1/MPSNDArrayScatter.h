@interface MPSNDArrayScatter : MPSNDArrayMultiaryKernel
@property (nonatomic) NSInteger operation;
@property (nonatomic) Q batchDimensions;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (int)operation;
- (void)dealloc;
- (void)encodeWithCoder:;
- (void)setBatchDimensions:;
- (id)initWithDevice:operation:;
- (void)encodeToCommandBuffer:primarySourceArray:secondarySourceArray:destinationArray:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (id)dimensionsNotToBeBroadcast;
- (unsigned long long)batchDimensions;
+ (id)libraryInfo:;
@end
