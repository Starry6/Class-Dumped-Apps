@interface MPSNDArrayLogSoftMax : MPSNDArrayUnaryKernel
@property (nonatomic) Q axis;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)setAxis:;
- (void)encodeWithCoder:;
- (unsigned long long)axis;
- (id)initWithDevice:;
- (id)initWithDevice:axis:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (id)dimensionsToBeRetained;
- (id)reshapeFitToTileToCommandBuffer:currentSource:kernelDimension:dimensionsToBeRetained:;
+ (id)libraryInfo:;
@end
