@interface MPSNNReshapeNode : MPSNNFilterNode
- (id)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:resultWidth:resultHeight:resultFeatureChannels:;
+ (id)nodeWithSource:resultWidth:resultHeight:resultFeatureChannels:;
@end
