@interface MPSNDArrayGather : MPSNDArrayBinaryKernel
@property (nonatomic) Q axis;
- (void)setAxis:;
- (unsigned long long)axis;
- (id)initWithDevice:;
- (id)destinationArrayDescriptorForSourceArrays:sourceState:;
- (void)encodeToCommandBuffer:primarySourceArray:secondarySourceArray:destinationArray:;
- (id)encodeToCommandBuffer:primarySourceArray:secondarySourceArray:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (id)dimensionsNotToBeBroadcast;
+ (id)libraryInfo:;
@end
