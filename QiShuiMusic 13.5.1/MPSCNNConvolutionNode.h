@interface MPSCNNConvolutionNode : MPSNNFilterNode
@property (nonatomic) MPSCNNConvolutionStateNode convolutionState;
@property (nonatomic) <MPSCNNConvolutionDataSource> weights;
@property (nonatomic) Q trainingStyle;
@property (nonatomic) Q accumulatorPrecision;
@property (nonatomic) MPSCNNConvolutionGradientStateNode convolutionGradientState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)weights;
- (id)resultState;
- (id)newFilterNode;
- (Class)gradientClass;
- (id)convolutionGradientState;
- (unsigned long long)trainingStyle;
- (void)setTrainingStyle:;
- (id)initWithSource:weights:;
- (id)initWithSource:weights:state:;
- (id)convolutionState;
- (unsigned long long)accumulatorPrecision;
- (void)setAccumulatorPrecision:;
+ (id)nodeWithSource:weights:;
@end
