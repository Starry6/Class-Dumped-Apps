@interface MPSCNNUpsamplingGradient : MPSCNNGradientKernel
@property (nonatomic) double scaleFactorX;
@property (nonatomic) double scaleFactorY;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (double)scaleFactorX;
- (double)scaleFactorY;
- (id)destinationImageDescriptorForSourceImages:sourceStates:;
- (id)initWithDevice:filterType:integerScaleFactorX:integerScaleFactorY:;
+ (id)libraryInfo:;
@end
