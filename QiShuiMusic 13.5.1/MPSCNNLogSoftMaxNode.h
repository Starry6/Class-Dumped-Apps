@interface MPSCNNLogSoftMaxNode : MPSNNFilterNode
- (id)initWithSource:;
- (id)newFilterNode;
- (Class)gradientClass;
+ (id)nodeWithSource:;
@end
