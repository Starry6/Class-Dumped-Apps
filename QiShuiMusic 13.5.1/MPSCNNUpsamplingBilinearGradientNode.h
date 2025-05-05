@interface MPSCNNUpsamplingBilinearGradientNode : MPSNNGradientFilterNode
@property (nonatomic) double scaleFactorX;
@property (nonatomic) double scaleFactorY;
- (double)scaleFactorX;
- (double)scaleFactorY;
- (id)newFilterNode;
- (id)initWithGradientImages:forwardFilter:;
- (id)initWithSourceGradient:sourceImage:gradientState:scaleFactorX:scaleFactorY:;
+ (id)nodeWithSourceGradient:sourceImage:gradientState:scaleFactorX:scaleFactorY:;
@end
