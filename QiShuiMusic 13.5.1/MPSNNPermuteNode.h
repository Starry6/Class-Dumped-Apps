@interface MPSNNPermuteNode : MPSNNFilterNode
- (id)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:dimensionOrder:;
+ (id)nodeWithSource:dimensionOrder:;
@end
