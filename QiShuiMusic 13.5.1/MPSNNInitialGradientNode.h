@interface MPSNNInitialGradientNode : MPSNNFilterNode
- (id)initWithSource:;
- (id)gradientFilterWithSources:;
- (id)trainingGraphWithSourceGradient:nodeHandler:;
- (id)newFilterNode;
+ (id)nodeWithSource:;
@end
