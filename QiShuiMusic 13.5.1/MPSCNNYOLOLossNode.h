@interface MPSCNNYOLOLossNode : MPSNNFilterNode
@property (nonatomic) MPSNNLabelsNode inputLabels;
- (void)dealloc;
- (id)gradientFilterWithSources:;
- (id)inputLabels;
- (id)trainingGraphWithSourceGradient:nodeHandler:;
- (id)newFilterNode;
- (id)initWithSource:lossDescriptor:;
+ (id)nodeWithSource:lossDescriptor:;
@end
