@interface MPSNDArrayUnaryKernel : MPSNDArrayMultiaryKernel
@property (nonatomic) {?=[16q]} offsets;
@property (nonatomic) Q edgeMode;
@property (nonatomic) {?=[16Q]} kernelSizes;
@property (nonatomic) {?=[16q]} strides;
@property (nonatomic) {?=[16Q]} dilationRates;
- (id)initWithCoder:device:;
- (id)strides;
- (id)initWithDevice:;
- (unsigned long long)edgeMode;
- (void)setStrides:;
- (id)dilationRates;
- (void)setDilationRates:;
- (id)offsets;
- (void)setOffsets:;
- (id)kernelSizes;
- (void)setKernelSizes:;
- (void)setEdgeMode:;
- (id)encodeToCommandBuffer:sourceArray:;
- (void)encodeToCommandBuffer:sourceArray:destinationArray:;
- (id)encodeToCommandBuffer:sourceArray:resultState:outputStateIsTemporary:;
- (void)encodeToCommandBuffer:sourceArray:resultState:destinationArray:;
+ (unsigned long long)expectedVirtualSourceCount;
@end
