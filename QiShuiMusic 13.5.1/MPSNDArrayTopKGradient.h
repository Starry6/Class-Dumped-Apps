@interface MPSNDArrayTopKGradient : MPSNDArrayUnaryGradientKernel
@property (nonatomic) Q K;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)destinationArrayDescriptorForSourceArrays:sourceState:;
- (void)setK:;
- (unsigned long long)K;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (id)dimensionsNotToBeBroadcast;
- (id)initWithDevice:K:;
+ (id)libraryInfo:;
@end
