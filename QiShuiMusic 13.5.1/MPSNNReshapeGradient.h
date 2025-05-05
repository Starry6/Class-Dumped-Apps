@interface MPSNNReshapeGradient : MPSCNNGradientKernel
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:paddingMethod:primaryOffset:secondaryOffset:kernelOffset:;
+ (id)libraryInfo:;
@end
