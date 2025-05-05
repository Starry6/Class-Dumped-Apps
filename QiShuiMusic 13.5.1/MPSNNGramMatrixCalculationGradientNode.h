@interface MPSNNGramMatrixCalculationGradientNode : MPSNNGradientFilterNode
@property (nonatomic) float alpha;
- (float)alpha;
- (id)newFilterNode;
- (id)initWithSourceGradient:sourceImage:gradientState:;
- (id)initWithGradientImages:forwardFilter:;
- (id)initWithSourceGradient:sourceImage:gradientState:alpha:;
+ (id)nodeWithSourceGradient:sourceImage:gradientState:;
+ (id)nodeWithSourceGradient:sourceImage:gradientState:alpha:;
@end
