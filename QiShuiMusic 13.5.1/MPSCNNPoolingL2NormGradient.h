@interface MPSCNNPoolingL2NormGradient : MPSCNNPoolingGradient
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)initWithDevice:kernelWidth:kernelHeight:strideInPixelsX:strideInPixelsY:;
- (void)encodeWithCoder:;
@end
