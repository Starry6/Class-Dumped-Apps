@interface MPSCNNUpsampling : MPSCNNKernel
@property (nonatomic) double scaleFactorX;
@property (nonatomic) double scaleFactorY;
@property (nonatomic) BOOL alignCorners;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:paddingMethod:sourceOffset:;
- (double)scaleFactorX;
- (double)scaleFactorY;
- (BOOL)alignCorners;
- (id)initWithDevice:filterType:integerScaleFactorX:integerScaleFactorY:alignCorners:;
+ (id)libraryInfo:;
@end
