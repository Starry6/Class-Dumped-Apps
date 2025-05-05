@interface MPSNNScale : MPSCNNKernel
- (id)initWithCoder:device:;
- (void)setOptions:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (void)setLabel:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:paddingMethod:sourceOffset:;
- (void)setEdgeMode:;
- (id)initWithDevice:transformProvider:handle:outputSize:scaleClass:;
+ (id)libraryInfo:;
@end
