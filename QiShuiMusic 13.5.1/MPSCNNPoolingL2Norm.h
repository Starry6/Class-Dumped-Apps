@interface MPSCNNPoolingL2Norm : MPSCNNPooling
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)initWithDevice:kernelWidth:kernelHeight:strideInPixelsX:strideInPixelsY:;
@end
