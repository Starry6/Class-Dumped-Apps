@interface MPSNDArrayTopK : MPSNDArrayUnaryKernel
@property (nonatomic) Q K;
@property (nonatomic) BOOL findIndices;
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
- (id)initWithDevice:K:findIndices:;
- (BOOL)findIndices;
- (void)setFindIndices:;
+ (id)libraryInfo:;
@end
