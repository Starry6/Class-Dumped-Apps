@interface MPSCNNDilatedPoolingMax : MPSCNNPooling
@property (nonatomic) Q dilationRateX;
@property (nonatomic) Q dilationRateY;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (unsigned long long)dilationRateX;
- (id)initWithDevice:kernelWidth:kernelHeight:strideInPixelsX:strideInPixelsY:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (unsigned long long)dilationRateY;
- (id)newPlugin;
- (id)initWithDevice:kernelWidth:kernelHeight:dilationRateX:dilationRateY:strideInPixelsX:strideInPixelsY:;
@end
