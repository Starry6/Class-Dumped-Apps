@interface MPSCNNDilatedPoolingMaxGradientNode : MPSCNNPoolingGradientNode
@property (nonatomic) Q dilationRateX;
@property (nonatomic) Q dilationRateY;
- (unsigned long long)dilationRateX;
- (unsigned long long)dilationRateY;
- (id)newFilterNode;
- (id)initWithGradientImages:forwardFilter:;
- (id)initWithSourceGradient:sourceImage:gradientState:kernelWidth:kernelHeight:strideInPixelsX:strideInPixelsY:dilationRateX:dilationRateY:;
+ (id)nodeWithSourceGradient:sourceImage:gradientState:kernelWidth:kernelHeight:strideInPixelsX:strideInPixelsY:dilationRateX:dilationRateY:;
@end
