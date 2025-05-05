@interface MPSCNNGroupNormalizationGradientNode : MPSNNGradientFilterNode
@property (nonatomic) Q trainingStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)newFilterNode;
- (id)initWithSourceGradient:sourceImage:gradientState:;
- (id)initWithGradientImages:forwardFilter:;
- (unsigned long long)trainingStyle;
- (void)setTrainingStyle:;
+ (id)nodeWithSourceGradient:sourceImage:gradientState:;
@end
