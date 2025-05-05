@interface MPSNDArrayStridedSlice : MPSNDArrayUnaryKernel
@property (nonatomic) {?=[16q]} strides;
- (id)strides;
- (id)initWithDevice:;
- (id)destinationArrayDescriptorForSourceArrays:sourceState:;
- (void)setStrides:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (id)stridesAtSourceIndex:;
+ (id)libraryInfo:;
@end
