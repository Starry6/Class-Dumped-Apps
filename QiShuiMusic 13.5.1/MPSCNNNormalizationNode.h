@interface MPSCNNNormalizationNode : MPSNNFilterNode
@property (nonatomic) float alpha;
@property (nonatomic) float beta;
@property (nonatomic) float delta;
- (float)delta;
- (id)initWithSource:;
- (void)setAlpha:;
- (float)beta;
- (void)setDelta:;
- (float)alpha;
- (void)setBeta:;
+ (id)nodeWithSource:;
@end
