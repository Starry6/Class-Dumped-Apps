@interface MPSNNReductionFeatureChannelsSumNode : MPSNNUnaryReductionNode
@property (nonatomic) float weight;
- (float)weight;
- (void)setWeight:;
- (id)newFilterNode;
@end
