@interface MPSNNReduceFeatureChannelsSum : MPSNNReduceUnary
@property (nonatomic) float weight;
- (id)initWithCoder:device:;
- (float)weight;
- (void)setWeight:;
- (id)initWithDevice:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:paddingMethod:sourceOffset:;
- (void)weight:;
@end
