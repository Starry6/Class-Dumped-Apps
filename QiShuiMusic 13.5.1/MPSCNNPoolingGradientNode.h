@interface MPSCNNPoolingGradientNode : MPSNNGradientFilterNode
@property (nonatomic) Q kernelWidth;
@property (nonatomic) Q kernelHeight;
@property (nonatomic) Q strideInPixelsX;
@property (nonatomic) Q strideInPixelsY;
- (unsigned long long)strideInPixelsY;
- (unsigned long long)strideInPixelsX;
- (unsigned long long)kernelHeight;
- (unsigned long long)kernelWidth;
- (id)initWithGradientImages:forwardFilter:;
- (id)initWithSourceGradient:sourceImage:gradientState:kernelWidth:kernelHeight:strideInPixelsX:strideInPixelsY:paddingPolicy:;
+ (id)nodeWithSourceGradient:sourceImage:gradientState:kernelWidth:kernelHeight:strideInPixelsX:strideInPixelsY:paddingPolicy:;
@end
