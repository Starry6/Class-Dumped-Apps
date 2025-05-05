@interface MPSCNNPoolingNode : MPSNNFilterNode
@property (nonatomic) Q kernelWidth;
@property (nonatomic) Q kernelHeight;
@property (nonatomic) Q strideInPixelsX;
@property (nonatomic) Q strideInPixelsY;
- (unsigned long long)strideInPixelsY;
- (unsigned long long)strideInPixelsX;
- (unsigned long long)kernelHeight;
- (unsigned long long)kernelWidth;
- (id)initWithSource:kernelWidth:kernelHeight:strideInPixelsX:strideInPixelsY:;
- (id)newFilterNode;
- (id)initWithSource:filterSize:stride:;
- (id)initWithSource:filterSize:;
+ (id)nodeWithSource:filterSize:stride:;
+ (id)nodeWithSource:filterSize:;
@end
