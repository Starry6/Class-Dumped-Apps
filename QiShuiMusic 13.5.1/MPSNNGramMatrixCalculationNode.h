@interface MPSNNGramMatrixCalculationNode : MPSNNFilterNode
@property (nonatomic) float alpha;
@property (nonatomic) <MPSNNGramMatrixCallback> propertyCallBack;
- (id)initWithSource:;
- (void)dealloc;
- (float)alpha;
- (id)newFilterNode;
- (Class)gradientClass;
- (id)propertyCallBack;
- (void)setPropertyCallBack:;
- (id)initWithSource:alpha:;
+ (id)nodeWithSource:;
+ (id)nodeWithSource:alpha:;
@end
