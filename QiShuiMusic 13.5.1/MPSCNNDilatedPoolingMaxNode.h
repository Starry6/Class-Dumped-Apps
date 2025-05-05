@interface MPSCNNDilatedPoolingMaxNode : MPSNNFilterNode
@property (nonatomic) Q dilationRateX;
@property (nonatomic) Q dilationRateY;
- (unsigned long long)dilationRateX;
- (unsigned long long)dilationRateY;
- (id)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:filterSize:;
- (id)initWithSource:kernelWidth:kernelHeight:strideInPixelsX:strideInPixelsY:dilationRateX:dilationRateY:;
- (id)initWithSource:filterSize:stride:dilationRate:;
+ (id)nodeWithSource:filterSize:;
+ (id)nodeWithSource:filterSize:stride:dilationRate:;
@end
