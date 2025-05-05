@interface MPSNNReduceRowMean : MPSNNReduceUnary
- (id)initWithCoder:device:;
- (id)initWithDevice:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:paddingMethod:sourceOffset:;
@end
