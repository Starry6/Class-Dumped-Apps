@interface MPSNNGradientFilterNode : MPSNNFilterNode
- (id)resultState;
- (id)initWithGradientImages:sourceImages:gradientState:paddingPolicy:;
- (id)initWithGradientImages:forwardFilter:;
- (id)initWithGradientImages:sourceImages:binaryGradientState:paddingPolicy:;
- (id)resultStates;
@end
