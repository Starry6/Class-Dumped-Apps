@interface MPSNDArrayBinaryKernel : MPSNDArrayMultiaryKernel
@property (nonatomic) {?=[16q]} primaryOffsets;
@property (nonatomic) Q primaryEdgeMode;
@property (nonatomic) {?=[16Q]} primaryKernelSizes;
@property (nonatomic) {?=[16q]} primaryStrides;
@property (nonatomic) {?=[16Q]} primaryDilationRates;
@property (nonatomic) {?=[16q]} secondaryOffsets;
@property (nonatomic) Q secondaryEdgeMode;
@property (nonatomic) {?=[16Q]} secondaryKernelSizes;
@property (nonatomic) {?=[16q]} secondaryStrides;
@property (nonatomic) {?=[16Q]} secondaryDilationRates;
- (id)initWithCoder:device:;
- (id)initWithDevice:;
- (void)encodeToCommandBuffer:primarySourceArray:secondarySourceArray:destinationArray:;
- (id)encodeToCommandBuffer:primarySourceArray:secondarySourceArray:;
- (unsigned long long)primaryEdgeMode;
- (unsigned long long)secondaryEdgeMode;
- (id)primaryOffsets;
- (id)secondaryOffsets;
- (id)primaryKernelSizes;
- (id)secondaryKernelSizes;
- (id)primaryStrides;
- (id)secondaryStrides;
- (id)primaryDilationRates;
- (id)secondaryDilationRates;
- (id)encodeToCommandBuffer:primarySourceArray:secondarySourceArray:resultState:outputStateIsTemporary:;
- (void)encodeToCommandBuffer:primarySourceArray:secondarySourceArray:resultState:destinationArray:;
+ (unsigned long long)expectedVirtualSourceCount;
@end
