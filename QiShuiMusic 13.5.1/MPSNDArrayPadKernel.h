@interface MPSNDArrayPadKernel : MPSNDArrayUnaryKernel
@property (nonatomic) Q edgeMode;
@property (nonatomic) NSNumber constantValue;
@property (nonatomic) {MPSNDArrayPaddingSize=[16[2Q]]} paddingSize;
- (id)initWithCoder:device:;
- (id)constantValue;
- (id)copyWithZone:device:;
- (void)dealloc;
- (void)encodeWithCoder:;
- (id)initWithDevice:edgeMode:constantValue:paddingSize:;
- (id)destinationArrayDescriptorForSourceArrays:sourceState:;
- (unsigned long long)edgeMode;
- (id)paddingSize;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (id)dimensionsNotToBeBroadcast;
- (id)dimensionsToBeRetained;
+ (id)libraryInfo:;
@end
