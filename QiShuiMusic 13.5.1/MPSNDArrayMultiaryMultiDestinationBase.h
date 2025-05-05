@interface MPSNDArrayMultiaryMultiDestinationBase : MPSKernel
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (void)encodeWithCoder:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (id)initWithDevice:sourceCount:destinationCount:;
@end
