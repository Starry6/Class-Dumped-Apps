@interface MPSNNPadGradient : MPSCNNGradientKernel
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:;
+ (id)libraryInfo:;
@end
