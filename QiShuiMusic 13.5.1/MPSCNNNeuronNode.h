@interface MPSCNNNeuronNode : MPSNNFilterNode
@property (nonatomic) float a;
@property (nonatomic) float b;
@property (nonatomic) float c;
- (float)b;
- (id)descriptor;
- (float)a;
- (id)debugDescription;
- (float)c;
- (BOOL)isEqual:;
- (id)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:type:a:b:c:;
+ (id)nodeWithSource:descriptor:;
@end
