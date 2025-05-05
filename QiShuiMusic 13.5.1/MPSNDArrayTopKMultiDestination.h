@interface MPSNDArrayTopKMultiDestination : MPSNDArrayMultiaryMultiDestinationKernel
@property (nonatomic) Q K;
@property (nonatomic) BOOL computeGradient;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)setK:;
- (id)initWithDevice:K:computeGradient:;
- (unsigned long long)K;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (BOOL)supportsGradientForSourceIndex:;
- (id)dimensionsNotToBeBroadcast;
- (id)initWithDevice:K:;
- (id)destinationArrayDescriptorsForSourceArrays:sourceState:;
- (BOOL)computeGradient;
+ (id)libraryInfo:;
@end
