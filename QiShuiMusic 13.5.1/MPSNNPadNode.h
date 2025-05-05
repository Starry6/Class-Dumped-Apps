@interface MPSNNPadNode : MPSNNFilterNode
@property (nonatomic) float fillValue;
- (float)fillValue;
- (void)setFillValue:;
- (id)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:paddingSizeBefore:paddingSizeAfter:edgeMode:;
+ (id)nodeWithSource:paddingSizeBefore:paddingSizeAfter:edgeMode:;
@end
