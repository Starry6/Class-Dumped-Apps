@interface MPSCNNConvolutionGradientNode : MPSNNGradientFilterNode
@property (nonatomic) <MPSCNNConvolutionDataSource> weights;
@property (nonatomic) Q trainingStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)debugDescription;
- (id)weights;
- (id)newFilterNode;
- (id)initWithGradientImages:forwardFilter:;
- (unsigned long long)trainingStyle;
- (void)setTrainingStyle:;
- (id)initWithSourceGradient:sourceImage:gradientState:weights:;
- (id)initWithSourceGradient:sourceImage:convolutionGradientState:weights:;
+ (id)nodeWithSourceGradient:sourceImage:convolutionGradientState:weights:;
@end
