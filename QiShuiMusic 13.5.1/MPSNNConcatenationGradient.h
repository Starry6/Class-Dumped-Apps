@interface MPSNNConcatenationGradient : MPSCNNGradientKernel
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:paddingMethod:primaryOffset:secondaryOffset:kernelOffset:;
- (id)initWithDevice:sourceIndex:;
+ (id)libraryInfo:;
@end
