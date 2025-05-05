@interface MPSNDArrayInitialization : MPSNDArrayMultiaryKernel
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (void)encodeWithCoder:;
- (id)initWithDevice:sourceCount:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (unsigned long long)kernelDimensionalityForSourceArrays:destinationArrays:kernelDAGObject:;
- (unsigned long long)kernelDimensionalityForDestinationArray:;
- (void)encodeToCommandBuffer:destinationArray:;
- (id)encodeToCommandBuffer:destinationDescriptor:;
+ (id)libraryInfo:;
@end
