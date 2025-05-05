@interface MPSCNNDilatedPoolingMaxGradient : MPSCNNPoolingGradient
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)initWithDevice:kernelWidth:kernelHeight:strideInPixelsX:strideInPixelsY:;
- (id)initWithDevice:kernelWidth:kernelHeight:dilationRateX:dilationRateY:strideInPixelsX:strideInPixelsY:;
@end
